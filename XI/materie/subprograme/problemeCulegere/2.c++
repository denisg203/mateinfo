#include <iostream>

using namespace std;

void prime(int a, int b) {
    int i,sem,d;
    for(i=a;i<=b;i++) {
        sem=0;
        for(d=2;d<i/2;d++) {
            if(i%d==0)
                sem=1;
        }
        if(sem==0)
            cout << i << " ";
    }
}

int main() {
    int a,b;
    cin >> a >> b;
    prime(a,b);
    return 0;
}