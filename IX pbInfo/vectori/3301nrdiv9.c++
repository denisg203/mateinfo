//

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nrdiv9.in");
ofstream g("nrdiv9.out");

int n,i,j,k,x,d,k1;

int main() {
    f >> n;
    for(i=1;i*i<=n;i++) {
        x=i;
        d=2;k=1;
        while(x>1) {
            int p=0;
            while(x%d==0) {
                p++;
                x/=d;
            }
            k=k*(2*p+1);
            d++;
            if(d*d>x)
                d=x;
        }
        if(k==9)
            k1++;
    }
    g << k1;
    return 0;
}