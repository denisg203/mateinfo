#include <iostream>

using namespace std;

void num(int n, int v[50]) {
    if(n!=-1) {
        if(v[n-1]<=v[0]) v[n-1]=0;
        num(n-1,v);
    }
}