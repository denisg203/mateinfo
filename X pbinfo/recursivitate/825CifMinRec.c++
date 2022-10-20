#include <iostream>

using namespace std;

int cifmin(int n) {
    if(n<10) return n;
    int m=cifmin(n/10);
    if(m<n%10) return m;
    return n%10;
}