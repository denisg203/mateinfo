// Write a program containing the following classes and functions :
// ArrayClass - a class that will contain all the methods of the array
// add(data) - is used to append the specified element in argument to the end of list
// insert(int index, <datatype><data>) - inserts object or fata into list at offset index
// delete (index) - method that removes an element of the list at a given index
// update(index,data) - method that replaces the data at a given offset index
// minimum() - determines the minimum element
// maximum() - determines the maximum element

#include <iostream>

using namespace std;

int k,v[30],i,opt,number,poz,minn,maxx,x;

class ArrayClass {
    public:
        void add(int data);
        void insert(int index, int data);
        void remove(int index);
        void update(int index , int data);
        int minimum();
        int maximum();
};

void ArrayClass::add(int data) {
    k++; v[k]=data;
}

void ArrayClass::insert(int index, int data) {
    for(i=k;i>=index;i--) {
        v[i+1]=v[i];
    }
    k++;
    v[index]=data;
}

void ArrayClass::remove(int index) {
    for(i=index;i<k;i++) {
        v[i]=v[i+1];
    }
    k--;
}

void ArrayClass::update(int index, int data) {
    v[index]=data;
}

int ArrayClass::minimum() {
    minn=v[1];
    for(i=1;i<=k;i++) {
        if(v[i]<minn)
            minn=v[i];
    }
    return minn;
}

int ArrayClass::maximum() {
    minn=v[1];
    for(i=1;i<=k;i++) {
        if(v[i]>maxx)
            maxx=v[i];
    }
    return maxx;
}

int main() {
    k=0;
    ArrayClass array;
    do {
        for(i=1;i<=k;i++)
            cout << v[i] << " ";
        cout << endl;
        cout << "If you want to add a number please choose 1\n";
        cout << "If you want to insert a number at a chosen index please choose 2\n";
        cout << "If you want to remove a number at a chosen index please choose 3\n";
        cout << "If you want to update a number please choose 4\n";
        cout << "If you want to show the minimum number please choose 5\n";
        cout << "If you want to show the maximum number please choose 6\n";
        cout << "If you want to exit please choose 7\n";
        cin >> opt;
        switch(opt) {
            case 1: {
                cout << "What number do you want to add to the array?\n"; cin >> number;
                array.add(number);
                break;
            }
            case 2: {
                    cout << "What number do you want to insert?\n"; cin >> number;
                    cout << "On what position do you want to insert the number?\n"; cin >> poz;
                    array.insert(poz,number);
                    break;
            }
            case 3: {
                cout << "Which number do you want to remove?(position)\n"; cin >> poz;
                array.remove(poz);
                break;
            }
            case 4: {
                cout << "What position do you want to update?\n"; cin >> poz;
                cout << "With what number?\n"; cin >> number;\
                array.update(poz, number);
                break;
            }
            case 5: {
                x=array.minimum();
                cout << "The minimum number is: " << x << '\n';
                break;
            }
            case 6: {
                x=array.maximum();
                cout << "The maximum number is: " << x << '\n';
                break;
            }
        }
    }while(opt!=7);
    return 0;
}