#include <iostream>
#include <fstream>

using namespace std;

ifstream f("hamilton.in");
ofstream g("hamilton.out");

int grad(int x, int n, int a[11][11]) {
    int g=0;
    for(int j=1;j<=n;j++) {
        if(a[x][j]==1) g++;
    }
    return g;
}

int hamilton(int n, int a[11][11]) {
    for(int i=1;i<=n;i++)
        if(grad(i, n, a)<n/2) return 0;
    return 1;
}

int n,a[11][11],x,y;

int main() {
    f >> n;
    while(!f.eof()) {
        f >> x >> y;
        a[x][y]=1; a[y][x]=1;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++)
            g << a[i][j] << " ";
        g << endl;
    }
    g << hamilton(n, a);
    return 0;
}