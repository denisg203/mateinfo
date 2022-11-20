#include <iostream>

using namespace std;

long long ExistaImpareRec(int n) {
    if(n==0) return 0;
    else if((n%10)%2==1) return 1;
    else return ExistaImpareRec(n/10);
}