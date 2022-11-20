//se citeste un sir de caractere(mari si mici). se cere:
//A. sa se afiseze sirul de caractere doar cu litere mari
//B. sa se afiseze sirul de caractere doar cu litere mici
#include <iostream>
#include <string.h>

using namespace std;

char text[100];
int x,i;

int main() {
    cin.getline(text,100);
    x=strlen(text);
    for(i=0;i<x;i++) {
        if(islower(text[i])) {
            char c=toupper(text[i]);
            cout << c;
        }
        else
            cout << text[i];
    }
    cout << endl;
    for(i=0;i<x;i++) {
        if(isupper(text[i])) {
            char c=tolower(text[i]);
            cout << c;
        }
        else
            cout << text[i];
    }
    return 0;
}