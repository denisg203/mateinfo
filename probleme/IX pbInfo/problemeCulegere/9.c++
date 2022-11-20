#include <iostream>

using namespace std;

int m,n,i,j,x,a[10][10],maxx=-1,k;

int nenul(int i) {
    k=0;
    for(j=0;j<n;j++) {
        if(a[i][j]==0)
            k++;
    }
    return k;
}

int main() {
    cin >> m >> n;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++)
            cin >> a[i][j];
    }
    for(i=0;i<m;i++) {
        x=nenul(i);
        if(x>maxx)
            maxx=x;
    }
    if(maxx==-1)
        cout << "Nu exista linie cu valori nenule.";
    else {
        for(i=0;i<m;i++) {
            x=nenul(i);
            if(x==maxx)
                cout << i+1 << " ";
        }
    }
    return 0;
}