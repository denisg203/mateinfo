#include <iostream>

using namespace std;

int cifminpar(int n) {
    if(n<10) {
        if(n%2==0) return n;
        else return -1;
    }
    int m=cifminpar(n/10);
    if(n%2==1) return m;
    else if(m<n%10 && m!=-1) return m;
        else return n%10;
}