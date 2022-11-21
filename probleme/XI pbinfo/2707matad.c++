#include <iostream>

using namespace std;

int n,a[101][101],k=1;

int main() {
    cin >> n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            cin >> a[i][j];
    }
    for(int i=1;i<n;i++) {
        for(int j=i+1;j<=n;j++) {
            if(a[i][j]!=a[j][i]) k=0;
            if(a[i][j]<0 || a[i][j]>1) k=0;
        }
    }
    for(int i=1;i<=n;i++) if(a[i][i]!=0) k=0;
    cout << k;
}