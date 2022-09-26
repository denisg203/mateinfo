#include <iostream>

using namespace std;

void seDivid(int a, int b) {
    int c,s,x,i;
    for(i=a;i<=b;i++) {
        x=i; s=0;
        while(x!=0) {
            c=x%10;
            s+=c;
            x/=10;
        }
        if(i%s==0)
            cout << i << " ";
    }
}

int main() {
    int a,b;
    cin >> a >> b;
    seDivid(a,b);
    return 0;
}