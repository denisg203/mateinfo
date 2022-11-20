#include <iostream>

using namespace std;

int n,i,nrMax,maxx,d;

int nrDiv(int x) {
    int k=2;
    for(int d=2;d<=x/2;d++) {
        if(x%d==0)
            k++;
    }
    return k;
}

int main() {
    cin >> n;
    for(i=1;i<=n;i++) {
        d=nrDiv(i);
        if(d>maxx) {
            maxx=d;
            nrMax=i;
        }
    }
    cout << nrMax << " are " << maxx << " divizori.";
    return 0;
}