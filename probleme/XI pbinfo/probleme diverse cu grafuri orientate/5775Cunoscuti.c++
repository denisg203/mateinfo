#include <iostream>

using namespace std;

int maxx,n,m,x,y,v[101];

int main() {
    cin >> n >> m;
    for(int i=1;i<=m;i++) {
        cin >> x >> y;
        v[y]++;
    }
    for(int i=1;i<=n;i++) if(v[i]>maxx) maxx=v[i];
    for(int i=1;i<=n;i++) if(v[i]==maxx) cout << i << " ";
}