#include <iostream>
#include <cmath>

using namespace std;

int sum_div(int n) {
    int s=0;
    for(int i=1;i<=sqrt(n);i++) {
        if(n%i==0) {
            s+=i;
            if(i!=n/i) s=s+n/i;
        }
    }
    return s;
}

int n;

int main() {
    cin >> n;
    cout << sum_div(n);
}