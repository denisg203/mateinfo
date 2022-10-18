#include <iostream>

using namespace std;

int FCrescRec(int n) {
    if(n<10) return 1;
    else if(n%10>n/10%10) return 0;
    else return FCrescRec(n/10);
}