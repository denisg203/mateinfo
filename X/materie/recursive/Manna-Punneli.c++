#include <iostream>

using namespace std;

int manna(int x) {
    if(x>11)
        return x-1;
    return manna(manna(x+2));
}
int n,x;
int main() {
    cin >> n;
    x=manna(n);
    cout << "Prin calculul functiei Manna-Punneli am obtinut " << x;
    return 0;
}