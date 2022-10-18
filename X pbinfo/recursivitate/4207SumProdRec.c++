#include <iostream>

using namespace std;

long long SumProdRec(int n) {
    if(n==2) return 2;
    else return n*(n-1)+SumProdRec(n-1);
}