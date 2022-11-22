#include <iostream>
#include <fstream>

using namespace std;

ifstream f("gradek.in");
ofstream g("gradek.out");

int n,k,a[101][101],x,y,k1,k2,v[101],p;

int main() {
    f >> n >> k;
    while(!f.eof()) {
        f >> x >> y;
        a[x][y]=1; a[y][x]=1;
    }
    for(int i=1;i<=n;i++) if(a[k][i]==1) k2++;
    for(int i=1;i<=n;i++) {
        k1=0;
        for(int j=1;j<=n;j++) if(a[i][j]==1) k1++;
        if(k1==k2) v[p++]=i;
    }
    g << p << endl;
    for(int i=0;i<p;i++) g << v[i] << " ";
    return 0;
}