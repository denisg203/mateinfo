#include <iostream>

using namespace std;

int fib(int n) {
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    return fib(n-2)+fib(n-1);
}
int n,x;
int main() {
    cin >> n;
    x=fib(n);
    cout << "Al " << n << "-lea element din sirul lui Fibonacci este " << x;
    return 0;
}