#include <iostream>

using namespace std;

int cifmax(int n) {
    if(n<10) return n;
    int m=cifmax(n/10);
    if(m>n%10) return m;
    return n%10;
}