#include <iostream>

using namespace std;

int suma(int v[100], int n) {
    if(n==0) return 0;
    else return suma(v, n-1) + v[n-1];
}