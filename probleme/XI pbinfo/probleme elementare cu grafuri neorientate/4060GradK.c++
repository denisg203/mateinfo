#include <iostream>
#include <fstream>

using namespace std;

ifstream f("gradk.in");
ofstream g("gradk.out");

int n,k,k2,k1,x,y,a[101][101],v[101];

int main() {
    f >> n >> k;
    while(!f.eof()) {
        f >> x >> y;
        a[x][y]=1; a[y][x]=1;
    }
    for(int i=1;i<=n;i++) {
        k1=0;
        for(int j=1;j<=n;j++) {
            if(a[i][j]==1) k1++;
        }
        if(k1==k) v[k2++]=i;
    }
    if(k2==0) g << "NU EXISTA";
    else {
        g << k2;
        for(int i=0;i<k2;i++) g << " " << v[i];
    }
    return 0;
}