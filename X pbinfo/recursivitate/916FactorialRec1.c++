#include <iostream>

using namespace std;

int factorial(int n, int f) {
    if(n==0) return 1;
    else f=factorial(n-1,f)*n;
    return f;
}

int main() {
    int n,f;
    cin >> n;
    cout << factorial(n,f);
    return 0;
}