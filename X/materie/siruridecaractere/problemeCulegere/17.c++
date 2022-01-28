// abc si 243 => aabbbbccc
#include <iostream>
#include <string.h>

using namespace std;

char text[100],digit[100],rez[100];
int i,x,y;

int main() {
    cin.getline(text,100); cin.getline(digit,100);
    x=strlen(text);
    for(i=0;i<x;i++) {
        y=int(digit[i])-48;
        while(y>0) {
            cout << text[i];
            y--;
        }
    }
    return 0;
}