//palindrom?
#include <iostream>
#include <string.h>

using namespace std;

char text[20];
int ms,md,sem;

int main() {
    cin.getline(text, 20);
    ms=0; md=strlen(text)-1; sem=1;
    while(ms<=md && sem) {
        if(text[ms]!=text[md])
            sem=0;
        ms++; md--;
    }
    if(sem)
        cout << "da";
    else
        cout << "nu";
    return 0;
}