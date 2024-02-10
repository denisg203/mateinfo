#include <iostream>
#include <fstream>

using namespace std;

int x,v[100],i,k,aux,j;

ifstream f;

int main() {
    f.open("bac.in");
    while(!f.eof()) {
        f >> x;
        if(x%10==0 && x/10%10==2) {
            v[k]=x;
            k++;
        }
    }
    for(i=0;i<k-1;i++) {
        for(j=i;j<k;j++) {
            if(v[i]<v[j]) {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
    for(i=0;i<3;i++) cout << v[i] << " ";
    f.close();
}