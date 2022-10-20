#include <iostream>

using namespace std;

int cmmdc(int x, int y) {
    if(x==y) return x;
    else if(x>y) return cmmdc(x-y, y);
    else return cmmdc(x, y-x);
}