#include <iostream>

using namespace std;

int concat(int a, int b) {
    int aux=b,p=1;
    while(aux) {
        p*=10; aux/=10;
    }
    return a*p+b;
}