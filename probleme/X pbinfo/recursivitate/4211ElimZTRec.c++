#include <iostream>

using namespace std;

int ElimZTRec(int n) {
    if(n%10!=0) return n;
    else return ElimZTRec(n/10);
}