#include <iostream>
#include <fstream>

using namespace std;

ifstream f("moka.in");
ofstream g("moka.out");

long long putere(long long a, long long n, long long mod) {
    if(n==0) return 1;
    else {
        long long x=putere(a,n/2,mod);
        if(n%2==0) return x*x%mod;
        else return x*x%mod*a%mod;
    }
}

long long a,b;

int main() {
    f >> a >> b;
    g << putere(a,b,1999999973);
}