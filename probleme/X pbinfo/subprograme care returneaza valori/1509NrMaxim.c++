#include <iostream>

using namespace std;

int nrmaxim(int n) {
    int aux=n,put=1,p=0,maxi=-1;
    while(aux) {
        put=put*10;
        p++;
        aux/=10;
    }
    while(p) {
        n=n%(put/10)*10+n/(put/10);
        if(n>maxi) maxi=n;
        p--;
    }
    return maxi;
}