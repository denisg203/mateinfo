#include <iostream>
#include <fstream>

using namespace std;

ifstream f("adiacenta.in");
ofstream g("adiacenta.out");

int n,m,x,y,a[101][101];

int main() {
    f >> n >> m;
    for(int i=1;i<=m;i++) {
        f >> x >> y;
        if(a[x][y]==0) a[x][y]++;
        if(a[y][x]==0) a[y][x]++;
    }
    for(int i=1;i<=n;i++) { 
        for(int j=1;j<=n;j++) {
            g << a[i][j] << " ";
        }
        g << endl;
    }
}