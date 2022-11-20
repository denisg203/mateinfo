#include <iostream>

using namespace std;

int c=0,x,k;

void cnt_cif(int n, int k, int &c) {
    if(n>0) {
        if(n%10>=k) c++;
        cnt_cif(n/10,k,c);
    }
}

int main() {
    cin >> x >> k; cnt_cif(x,k,c); cout << c;
    return 0;
}