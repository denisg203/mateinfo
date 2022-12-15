#include <iostream>
#include <fstream>

using namespace std;

ifstream f("a.txt");

int n,v[10],x[10],a[10][10],i,k,st,dr,start,c,p=1;

int main() {
    f >> n >> start;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            f >> a[i][j];
    st=1; dr=1; c=1; x[1]=start; v[start]=1;
    while(p!=n) {
        while(st<=dr && st <=8 && dr<=8) { //2 conditii in plus ca sa evit segfault
            k=x[st];
            for(i=1;i<=n;i++) {
                if(a[k][i]==1 && v[i]==0) {
                    dr++; p++;
                    x[dr]=i;
                    v[i]=c;
                }
            }
            st++;
        }
        c++; dr++; start=1;
        while(v[start]!=0) start++; if(start>n) break; //break ca sa evit segfault
        x[dr]=start; 
        v[start]=c;
    }
    int k=1;
    while(k<c) {
        int j=1;
        while(j<=n) {
            if(v[j]==k) cout << j << " ";
            j++;
        } 
        cout << endl; k++;
    }
    return 0;
}