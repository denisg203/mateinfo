#include <iostream>

using namespace std;

int n,m,x,y,ge[101],gi[101],k;

int main() {
    cin >> n >> m;
    for(int i=1;i<=m;i++)  {
        cin >> x >> y;
        ge[x]++; gi[y]++;
    }
    for(int i=1;i<=n;i++) {
        if(gi[i]==ge[i]) k++;
    }
    if(k==0) cout << "NU EXISTA";
    else {
        cout << k << endl;
        for(int i=1;i<=n;i++) {
            if(gi[i]==ge[i]) cout << i << " ";
        }
    }
    return 0;
}