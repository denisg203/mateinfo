#include <iostream>

using namespace std;

int k=0;

int cifmaxpar(int n) {
    if(n==0 && k==0) return -1;
    else if(n%2==0){
        int m=cifmaxpar(n/10);
        if(m>n%10 && n%2==0) {
            k++;
            return m;
        } 
        return n%10;
    }
    else return cifmaxpar(n/10);
}

int main() {
    int x;
    cin >>x; cout << cifmaxpar(x);
    return 0;
}