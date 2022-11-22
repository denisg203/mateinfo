#include <iostream>
#include <fstream>

using namespace std;

ifstream f("adiacenta1.in");
ofstream g("adiacenta1.out");

int x,y,a[101][101],n;

int main () {
    while(!f.eof()) {
        f >> x >> y;
        a[x][y]=1; a[y][x]=1;
        n=max(n, max(x,y));
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            g << a[i][j] << " ";
        }
        g << endl;
    }
}