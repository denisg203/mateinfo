#include <iostream>

using namespace std;

int cautare(int n, double x[100], double v) {
    if(n==0) return -1;
    else if(x[n-1]==v) return n-1;
    else return cautare(n-1,x,v);
}