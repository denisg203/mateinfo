#include <iostream>

using namespace std;

int cmmnr(int n) {
    int v[10]={0},x=0,ok=0;
    while(n) {
        v[n%10]++;
        n/=10;
    }
    for(int i=1;i<=9;i++) {
        if(ok) break;
        while(v[i]) {
            x=x*10+i;
            v[i]--; ok=1; break;
        }
    }
    while(v[0]) {
        x=x*10; v[0]--;
    }
    for(int i=1;i<=9;i++) {
        while(v[i]) {
            x=x*10+i;
            v[i]--;
        }
    }
    return x;
}