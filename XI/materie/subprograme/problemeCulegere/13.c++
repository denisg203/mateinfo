// a[m], b[n]
// NECESITA OPTIMIZARE
#include <iostream>

using namespace std;

int a[10],b[10],c[20],k=0,m,n,i,j,sem,x;

int cauta(int x) {
    sem=0;
    for(j=0;j<n;j++)
        if(b[j]==x)
            sem=1;
    return sem;
}

int main() {
    cin >> m >> n;
    for(i=0;i<m;i++) 
        cin >> a[i];
    for(i=0;i<n;i++)
        cin >> b[i];
    // a intersectat cu b
    for(i=0;i<m;i++) {
        x=cauta(a[i]);
        if(x==1) {
            c[k]=a[i];
            k++;
        }
    }
    cout << "\nC=";
    for(i=0;i<k;i++)
        cout << c[i] << " ";
    //a reunit cu b
    k=0;
    for(i=0;i<m;i++) {
        x=cauta(a[i]);
        if(x!=1) {
            c[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++) {
        c[k]=b[i];
        k++;
    }
    cout << "\nC=";
    for(i=0;i<k;i++)
        cout << c[i] << " ";
    // a - b
    k=0;
    for(i=0;i<m;i++) {
        x=cauta(a[i]);
        if(x==0) {
            c[k]=a[i];
            k++;
        }
    }
    cout << "\nC=";
    for(i=0;i<k;i++)
        cout << c[i] << " ";
    return 0;
}