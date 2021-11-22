//Binary search

#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;
int ms,md,stare,poz,mij,opt,k;
int main() {
    cout << "Hello player!\nThis is a game where I will guess the number you are thinking at\nPlease think at a number and let`s begin!\n";
    ms=0;
    md=101;
    stare=0;
    poz=0;
    do {
        mij=(md+ms)/2;
        cout << "Is your number " << mij << "?\n";
        cout << "Please introduce 1 if this is your number, 2 if it is lower or 3 if it is bigger\n";
        cin >> opt;
        switch(opt) {
            case 1: {
                stare=1;
                poz=mij;
                k++;
                break;
            }
            case 2: {
                md=mij;
                k++;
                break;
            }
            case 3: {
                ms=mij;
                k++;
                break;
            }
        }
    } while(md-ms>1 && !stare);
    cout << "I found your number in " << k << " tries!";
    return 0;
}