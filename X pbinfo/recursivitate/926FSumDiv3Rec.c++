#include <iostream>

using namespace std;

int sum3(int v[100], int n) {
    if(n==0) return 0;
    else if(v[n-1]%3==0) return sum3(v, n-1) + v[n-1];
    else return sum3(v, n-1);
}