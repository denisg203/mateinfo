#include <iostream>

using namespace std;

int mCifra(int n, int m) {
    int x=n,k=0,c;
    while(x!=0) {
        k++;
        x/=10;
    }
    k=k-m;
    while(k!=0) {
        c=n%10; n/=10;
        k--;
    }
    return c;
}

int main() {
    int n,m;
    cin >> n >> m;
    int x=mCifra(n,m);
    cout << x;
}