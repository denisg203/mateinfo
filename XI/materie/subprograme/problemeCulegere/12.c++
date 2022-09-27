#include <iostream>

using namespace std;

int n,i,j,v[10],x,y,k;

int cmmdc(int a, int b) {
    while(a!=b) {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

//nota: 2 numere sunt prime intre ele daca cmmdc al lor este 1

int main() {
    cin >> n;
    for(i=0;i<n;i++)
        cin >> v[i];
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            x=v[i]; y=v[j];
            k=cmmdc(x,y);
            if(k==1)
                cout << v[i] << " " << v[j] << '\n';
        }
    }
    return 0;
}