#include <iostream>
#include <fstream>

using namespace std;

ifstream f("gradmax.in");
ofstream g("gradmax.out");

int n,x,y,a[101][101],maxx,k;

int main() {
    f >> n;
    while(!f.eof()) {
        f >> x >> y;
        a[x][y]=1; a[y][x]=1;
    }
    for(int i=1;i<=n;i++) {
        k=0;
        for(int j=1;j<=n;j++)
            if(a[i][j]==1) k++;
        if(k>maxx) {
            maxx=k;
            x=1;
        }
        else if(k==maxx) x++;
    }
    g << x << " ";
    for(int i=1;i<=n;i++) {
        int k=0;
        for(int j=1;j<=n;j++)
            if(a[i][j]==1) k++;
        if(k==maxx) g << i << " ";
    }
    return 0;
}