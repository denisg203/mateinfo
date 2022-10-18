#include <iostream>

using namespace std;

int DifParImpar(int n) {
    if(n==0) return 0;
    else if(n%2==0) return DifParImpar(n/10)+1;
        else return DifParImpar(n/10)-1;
}