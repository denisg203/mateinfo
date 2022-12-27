#include <iostream>

using namespace std;

int Egal(int n) {
    int c,k;
    while(n) {
        c=n%10;
        if(c%2==1) {
            k=c; n/=10; break;
        }
        n/=10;
    }
    while(n) {
        c=n%10;
        if(c%2==1 && k!=c) return 0;
        n/=10;
    }
    return 1;
}