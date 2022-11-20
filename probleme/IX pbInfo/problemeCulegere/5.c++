#include <iostream>

using namespace std;

void palindrom(int n) {
    int x,y,c;
    x=n;
    while(n!=0) {
        c=n%10;
        y=y*10+c;
        n/=10;
    }
    if(x==y)
        cout << "da";
    else 
        cout << "nu";
}

int main() {
    int n;
    cin >> n;
    palindrom(n);
}