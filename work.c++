#include <iostream>

using namespace std;

int v[10],n,val;

int s(int s[10], int x, int y) {
    for(int i=0;i<y;i++) {
            if(x==s[i]) {
                return i;
            }
            else if(x<s[i]) {
                return i;
            }
        }
        return y;
}

int main() {
    cin >> n >> val;
    for(int i=0;i<n;i++) cin >> v[i];
    cout << s(v, val, n);
}