#include <iostream>
#include <fstream>

using namespace std;

ifstream f("test.in");
ofstream g("test.out");

long long putere(long long a, long long n, int mod) {
    if(n==0) return 1;
    else {
        long long x=putere(a,n/2,mod);
        if(n%2==0) return x*x%mod;
        else return x*x%mod*a%mod;
    }
}

long long n,a[1000],b[1000],s;

int main() {
    f >> n;
    for(int i=0;i<n;i++) f >> a[i];
    for(int i=0;i<n;i++) f >> b[i];
    for(int i=0;i<n;i++) {
        s+=putere(a[i],b[i],6669666);
    }
    g << s;
}