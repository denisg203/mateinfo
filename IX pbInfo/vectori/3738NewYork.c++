//80 puncte.


#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nyk.in");
ofstream g("nyk.out");

int i,n,m,j,a[1001],p1,p2,maxx,sem,x,y,d,stare;

int cmmdc(int x, int y) {
    while(x!=y) {
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    return x;
}

int ePrim(int x) {
    for(int i=2;i<x/2;i++) {
        if(x%i==0)
            return false;
    }
    return true;
}

int main() {
    f >> n;
    for(i=0;i<n;i++) {
        f >> m;
        for(j=0;j<m;j++) {
            f >> a[j];
        }
        for(j=0;j<m-1;j++) {
            x=a[j]; y=a[j+1];
            d=cmmdc(x,y);
        }
        if(d>maxx && ePrim(d)) {
            p1=i+1;
            maxx=d;
            stare=1;
        }
        j=m;
        sem=0;
        while(j>=0 && !sem) {
            j--;
            if(maxx==a[j]) {
                p2=j+1;
                sem=1;
            }
        }
    }
    if(stare)
        g << p1 << " " << p2 << '\n' << maxx;
    else
        g << "Nu am gasit casa!";
    return 0;
} 