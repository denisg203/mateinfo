#include <iostream>

using namespace std;

int TreiCifImp(int n) {
    int k,c;
    while(n) {
        c=n%10;
        if(c%2==1) {
            k++;
            if(k==3)
                return 1;
        }
        else k=0;
        n/=10;
    }
    return 0;
}