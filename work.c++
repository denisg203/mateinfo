#include <iostream>

using namespace std;

struct cerc {
    int raza;
    struct coord{
        int x,y;
    }centru;
}fig;

int c1,c2,n,s;

int main() {
    cin >> n;
    c1=n%10; n/=10; c2=n%10;
    if(c1==c2) s=0;
    else if(c1>c2) s=1;
    else s=-1;
    while((c1-c2)*s>0) {
        c1=n%10; n/=10; c2=n%10;
    }
    cout << s << " " << n;
}