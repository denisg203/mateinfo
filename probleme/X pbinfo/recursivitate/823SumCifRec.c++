#include <iostream>

using namespace std;

int sumcif(int n) {
    if(n<10) return n;
    else return n%10+sumcif(n/10);
}