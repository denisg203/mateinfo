#include <iostream>

using namespace std;

struct poz {
    int i,j;;
}v[101];

int n,m,x,y,sem,k;

int main() {
    cin >> n >> m >> k;
    for(int i=1;i<=m;i++) {
        cin >> x >> y;
        v[x].i++; v[y].j++;
    }
    for(int i=1;i<=n;i++) {
        if(v[i].i+v[i].j==k) {
            cout << i << " ";
            sem=1;
        }
    }
    if(!sem) cout << "Nu exista";
    return 0;
}