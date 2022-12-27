#include <iostream>

using namespace std;

int i_prim(int n) {
    int sem=1,p1=n,p2=n;
    while(sem) {
        int s=0;
        for(int i=2;i<p2/2;i++) {
            if(p2%i==0) {
                s+=i;
                if(p2/i!=i) s=s+p2/i;
                if(s!=0) break;
            }
        }
        if(s==0) sem=0;
        else p2++;
    }
    sem=1;
    while(sem) {
        int s=0;
        for(int i=2;i<p1/2;i++) {
            if(p1%i==0) {
                s+=i;
                if(p1/i!=i) s=s+p1/i;
                if(s!=0) break;
            }
        }
        if(s==0) sem=0;
        else p1--;
    }
    return p2-p1; 
}

int n;

int main() {
    cin >> n;
    cout << i_prim(n);
}