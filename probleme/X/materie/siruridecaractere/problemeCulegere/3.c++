//se citeste un text care poate contine orice fel de caracter. sa se tipareasca textul obtinut prin transformarea in litere mari a literelor mici aflate pe pozitii impare in cadrul textului dat
#include <iostream>
#include <string.h>

using namespace std;

char text[100];
int x,i;

int main() {
    cin.getline(text,100); // consideram ca prima pozitie este 0 si nu 1
    x=strlen(text);
    for(i=1;i<x;i+=2) {
        if(islower(text[i])) {
            char c=toupper(text[i]);
            text[i]=c;
        }
    }
    cout << text;
    return 0;
}