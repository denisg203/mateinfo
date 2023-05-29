#include <iostream>

using namespace std;

int as,st[100],ev,n,k;

void init() {
    st[k]=0;
}

void succesor() {
    if(st[k]<n) {
        as=1;
        st[k]++;
    }
    else as=0;
}

void valid() {
    ev=1;
    for(int i=1;i<k;i++) if(st[k]==st[i]) ev=0;
}

int solutie() {
    return (k==n);
}

void tipar() {
    for(int i=1;i<=k;i++) cout << st[i] << " ";
    cout << endl;
}

int main() {
    cin >> n;
    k=1; init();
    while(k!=0) {
        do {
            succesor();
            if(as) valid();
        } while(!((!as) || (as==ev)));
        if(as) {
            if(solutie()) tipar();
            else {
                k++; init();
            }
        }
        else k--;
    }
}