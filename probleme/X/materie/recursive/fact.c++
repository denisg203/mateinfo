#include <iostream>

using namespace std;

int find_fact(int n) {
    if(n==1)
        return 1;
    return n*find_fact(n-1);
}
int n,x;
int main() {
    cin >> n;
    x=find_fact(n);
    cout << "Factorial de " << n << " este egal cu " << x;
    return 0;
}