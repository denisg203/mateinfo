#include <iostream>

using namespace std;

void afisvec(int v[100], int n) {
    if(n!=1) afisvec(v,n-1);
    cout << v[n-1] << " ";
}