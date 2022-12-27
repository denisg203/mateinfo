#include <iostream>
#include <fstream>

using namespace std;

ifstream f("div3.in");
ofstream g("div3.out");

int div3(int n) {
    int s=0;
    while(n) {
        s=s+n%10;
        n/=10;
    }
    if(s%3==0) return 1;
    else return 0;
}

int n,x;

int main() {
    f >> n;
    for(int i=0;i<n;i++) {
        f >> x;
        if(div3(x))
            g << x << " ";
    }
    return 0;
}