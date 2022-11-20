#include <iostream>

using namespace std;

int stir(int n,int k) {
    if(k==1 && n==1)
        return 1;
    else if(k==0 || n==0)
        return 0;
    else if(n<k)
        return 0;
    return stir(n-1,k-1)+k*stir(n-1,k);
}

int x,k,n;

int main() {
    cin >> n >> k;
    x=stir(n,k);
    cout << x;
}