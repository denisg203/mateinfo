#include <iostream>

using namespace std;

int nr_cif_zero(int n) {
    int k=0;
    if(n==0) return 1;
    while(n) {
        if(n%10==0) k++;
        n/=10;
    }
    return k;
}