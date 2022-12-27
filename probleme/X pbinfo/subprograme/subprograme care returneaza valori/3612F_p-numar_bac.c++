#include <iostream>
#include <cmath>

using namespace std;

int kpn(int a, int b, int k) {
    int ks=0;
    for(int i=a;i<=b;i++) {
        int s=0;
        for(int j=1;j<=sqrt(i);j++) {
            if(i%j==0) {
                s+=j;
                if(j!=i/j) s=s+i/j;
            }
        }
        if(s%2==i%2) {
            ks++;
            if(ks==k) return i;
        }
    }
    return -1;
}