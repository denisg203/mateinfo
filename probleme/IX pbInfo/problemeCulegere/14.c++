//a[m] reunit cu b[n]
#include <iostream>

using namespace std;

int a[10],b[10],c[20],v[10],sem,i,j,k,m,n,aux;

//un subprogram pentru ordonarea unui vector
void sort(int k, int v[]) {
    do {
        sem=0;
        for(i=0;i<k;i++) {
            if(v[i]>v[i+1]) {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=v[i];
                sem=1;
            }
        }
    }while(sem);
}

//subprogram pt a insera o valoare intr-un vector ordonat pt a ramane ordonat(cautare binara)
void insert(int x, int k) {
    int poz=0;
    for(i=0;i<k;i++) {
        while(x<v[i])
            poz++;
    }
    k++;
    for(i=k;i>poz;i--) {
        v[i]=v[i-1];
    }
    v[poz]=x;
}

//DE GANDIT ALTA DATA

int main() {
    cin >> m >> n;
    for(i=0;i<m;i++) 
        cin >> a[i];
    for(i=0;i<n;i++) 
        cin >> b[i];
    sort(m, a);
    for(i=0;i<m;i++) {
        insert(b[i], i);
    }
    return 0;
}