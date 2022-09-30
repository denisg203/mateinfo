#include <iostream>

using namespace std;

int s,d,x,n,ok,i;

int div(int x) {
    s=0;
    for(d=1;d<=x/2;d++) {
        if(x%d==0)
            s=s+d;
    }
    return s;
}

bool perfect(int x) {
    if(x==s)
        return 1;
    else
        return 0;
}

int main() {
    cin >> n;
    for(i=1;i<=n;i++) {
        s=div(i); ok=perfect(i);
        if(ok)
            cout << i << " ";
    }
    return 0;
}