#include <iostream>

using namespace std;

int mp(int x) {
    if(x>11)
        return x-1;
    return mp(mp(x+2));
}