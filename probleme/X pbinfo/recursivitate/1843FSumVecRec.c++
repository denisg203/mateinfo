#include <iostream>

using namespace std;

int suma(int v[100], int n, int i, int j) {
    if(n==0) return 0;
    else if(n>=i && n<=j) return suma(v,n-1,i,j);
    else return v[n]+suma(v,n-1,i,j);
}
