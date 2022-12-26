#include <iostream>

using namespace std;

int cmmnr(int n) {
    int v[10]={0},x=0;
    while(n) {
        v[n%10]++;
        n/=10;
    }
    for(int i=9;i>=0;i--) {
        while(v[i]) {
            x=x*10+i;
            v[i]--;
        }
    }
    return x;
}