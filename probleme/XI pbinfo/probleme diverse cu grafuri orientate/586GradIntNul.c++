#include <iostream>

using namespace std;

int gi[101],n,m,x,y,k;

int main() {
    cin >> n >> m;
    for(int i=1;i<=m;i++) {
        cin >> x >> y;
        gi[y]++;
    }
    for(int i=1;i<=n;i++) {
        if(gi[i]==0) {
            cout << i << " ";
            k++;
        }
    }
    if(!k) cout << "NU EXISTA";
    return 0;
}