#include <iostream>
#include <cmath>

using namespace std;

int prim(int n) {
    if(n==1 || n==0) return 0;
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            return 0;
            if(i!=n/i) return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    cout << prim(n);
}