#include <iostream>

using namespace std;

int multiplu(int a[100], int n, int k) {
    if(n==-1) return 0;
    else if(a[n]%10==k && a[n]%k==0) return 1+multiplu(a,n-1,k);
    else return multiplu(a,n-1,k);
}