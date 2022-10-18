#include <iostream>

using namespace std;

int oglindit(int n) {
    int x;
    while(n) {
        x=x*10+n%10;
        n/=10;
    }
    return x;
}