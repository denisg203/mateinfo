//Fie un vector V cu n elemente naturale nenule, indexate de la 1 la n. Să se determine cel mai mare divizor comun al lor.

#include <iostream>

using namespace std;

int cmmdc2(int x, int y) {
    if(x==y) return x;
    else if(x>y) return cmmdc2(x-y,y);
    else return cmmdc2(x,y-x);
}

int cmmdcv(int v[], int st, int dr) {
    if(st==dr) return v[st];
    else {
        int m=(st+dr)/2;
        int a=cmmdcv(v,st,m);
        int b=cmmdcv(v,m+1,dr);
        return cmmdc2(a,b);
    }
}

int main() {
    int v[101], n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> v[i];
    cout << cmmdcv(v, 0, n-1);
    return 0;
}