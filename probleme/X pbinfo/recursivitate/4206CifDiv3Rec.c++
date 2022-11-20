#include <iostream>

using namespace std;

int CifDiv3Rec(int n){
    if(n==0) return 0;
    else if((n%10)%3==0) return CifDiv3Rec(n/10)+1;
    else return CifDiv3Rec(n/10);
}