#include <iostream>

using namespace std;

int poz,n,k,a[10],i,nrMax,nrMin;

int pozMin(int v[]) {
    nrMin=v[0]; poz=0;
    for(int j=1;j<n;j++) {
        if(v[j]<nrMin) {
            nrMin=v[j];
            poz=j;
        }
    }
    return poz;
}

int max(int v[]) {
    nrMax=v[0];
    for(int j=1;j<n;j++) {
        if(v[j]>nrMax)
            nrMax=a[j];
    }
    return nrMax;
}

int main() {
    cin >> n >> k;
    for(i=0;i<n;i++)
        cin >> a[i];
    while(k>1) {
        a[pozMin(a)]=max(a)+1;
        k--;
    }
    cout << a[pozMin(a)];
    return 0;
}