#include <iostream>

using namespace std;

int sumaCifre(int n) {
    int c,s;
    while(n!=0) {
        c=n%10;
        s+=c;
        n/=10;
    }
    return s;
}

int main() {
    int n,i,x;
    cin >> n;
    for(i=0;i<n;i++) {
        x=sumaCifre(i);
        if(x%2==1)
            cout << i << " ";
    }
}