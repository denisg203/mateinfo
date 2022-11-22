#include <iostream>
#include <fstream>

using namespace std;

ifstream f("izolate.in");
ofstream g("izolate.out");

int n,x,y,v[101],k;

int main() {
    f >> n;
    while(!f.eof()) {
        f >> x;
        v[x]++;
    }
    for(int i=1;i<=n;i++) if(v[i]==0) k++; g << k << " ";
    for(int i=1;i<=n;i++) if(v[i]==0) g << i << " ";
}