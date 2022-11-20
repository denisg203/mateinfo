#include <iostream>

using namespace std;

int k=0;

int nr_cif_zero(int n) {
    if(n==0 && k==0) return 1;
    else if(n==0) return 0;
    else {
        k++;
        if (n%10==0) return nr_cif_zero(n/10)+1;
        else return nr_cif_zero(n/10);
    }
}