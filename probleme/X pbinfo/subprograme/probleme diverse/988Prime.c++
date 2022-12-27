#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream f("prime.in");
ofstream g("prime.out");

int prim(int n) {
    for(int i=2;i<=sqrt(n);i++) {
        if(n%i==0) {
            return 0;
            if(n/i!=i) return 0;
        }
    }
    return 1;
}

int n,x;

int main() {
    f >> n;
    for(int i=0;i<n;i++) {
        f >> x;
        if(prim(x)) g << x << " ";
    }
    return 0;
}