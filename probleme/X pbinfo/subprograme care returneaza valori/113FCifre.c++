#include <iostream>

using namespace std;

int nr_cif(int n, int k) {
    int k1=0;
    while(n) {
        if(n%10!=0) if(k%(n%10)==0) k1++;
        n/=10;
    }
    return k1;
}