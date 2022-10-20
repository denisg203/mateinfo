#include <iostream>

using namespace std;

int suma(int v[100], int n, int i, int j) {
    if(n==j-i+1) return 0;
    else return suma(v,n-1,i,j) + v[n];
}

int main() {
    int v[100]={0},n,i,j;
    cin >> n;
    for(int k=1;k<=n;k++) cin >> v[k];
    cin >> i >> j;
    cout << suma(v,n,i,j);
    return 0;
}