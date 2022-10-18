#include <iostream>

using namespace std;

int sumfactcif(int n) {
    int c,p,s=0;
    if(n==0) return 1;
    while(n) {
        c=n%10; p=1;
        while(c) {
            p=p*c;
            c--;
        }
        s=s+p;
        n/=10;
    }
    return s;
}