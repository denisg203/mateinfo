#include <iostream>

using namespace std;

int n,k,k1,p,l;

int main() {
    cin >> n >> k;
    //n linii n*k coloane
    l=k;
    for(int i=1;i<=n;i++) {
        k1=i; p=0;
        for(int j=1;j<=n*k;j++) {
            if(p<l) {
                cout << k1 << " ";
                p++;
            }
            else {
                k1++; p=1; cout << k1 << " ";
            }
        }
        cout << endl;
    }
}