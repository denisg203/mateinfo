#include <iostream>

using namespace std;

void ordonare(int a[1000], int n, int st,int dr) {
    for(int i=st+1;i<=dr;i++) {
        if(a[i]<a[i-1]) swap(a[i],a[i-1]);
    }
    if(dr>st) ordonare(a,n,st,dr-1);
}