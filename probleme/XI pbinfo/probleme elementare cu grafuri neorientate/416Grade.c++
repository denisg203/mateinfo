#include <iostream>
#include <fstream>

using namespace std;

ifstream f("grade.in");
ofstream g("grade.out");

int n,x,y,a[101][101];

int main() {
    f >> n;
    while(!f.eof()) {
        f >> x >> y;
        a[x][y]=1; a[y][x]=1;
    }
    for(int i=1;i<=n;i++) {
        int k=0;
        for(int j=1;j<=n;j++) {
            if(a[i][j]==1) k++;
        }
        g << k << " ";
    }
}