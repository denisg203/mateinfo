#include <iostream>

using namespace std;

void afisvec(int v[100], int n) {
    cout << v[n-1] << " ";
    if(n!=1) afisvec(v, n-1);
}