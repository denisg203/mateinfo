#include <iostream>

using namespace std;

int sumcif(int x) {
    if(x<10) return x;
    else return sumcif(x/10)+x%10;
}