#include <iostream>
#include <fstream>

using namespace std;

ifstream f("siruri.in");
ofstream g("siruri.out");

int n,st[100],ev,as,k,p;

void init() {
    st[k]=0;
}

void succesor() {
    if(st[k]<n) {
        st[k]++;
        as=1;
    }
    else as=0;
}

void valid() {
    ev=1;
    for(int i=1;i<k;i++) {
        if(st[k]<=st[i]) ev=0;
    }
    if(k!=1) if(st[k]-st[k-1]>2) ev=0;
}

int solutie() {
    return(k==p);
}

void tipar() {
    for(int i=1;i<=k;i++) g << st[i] << " ";
    g << endl;
}

int main() {
    f >> n >> p;
    k=1; init();
    while(k>0) {
        do {
            succesor();
            if(as) valid();
        } while(!((!as) || (as==ev)));
        if(as) {
            if(solutie()) tipar();
            else {
                k++;
                init();
            }
        }
        else k--;
    }
    return 0;
}