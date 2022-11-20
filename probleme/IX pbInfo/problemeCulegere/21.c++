#include <iostream>

using namespace std;

int v[10],n,s,x,i,d,sem;

int prim(int x) {
    sem=1;
    for(d=2;d<=x/2;d++) {
        if(x%d==0)
            sem=0;
    }
    return sem;
}

int main() {
    cin >> n;
    for(i=0;i<n;i++) {
        cin >> v[i];
    }
    for(i=0;i<n;i++) {
        x=prim(v[i]);
        if(x==1)
            s=s+v[i];
    }
    cout << s;
    return 0;
}