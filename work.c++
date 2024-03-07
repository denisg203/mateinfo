#include <iostream>

using namespace std;

int v[10],n,val;

int main() {
    cin >> n >> val;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=n-1;i>=0;i--) {
            if(v[i]==val) {
                for(int j=i;j<n;j++) {
                    v[j]=v[j+1];
                }
                n--;
            }
        }
    for(int i=0;i<n;i++) cout << v[i] << " ";
    return 0;
}