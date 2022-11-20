//se citeste un text si un caracter c. sa se afiseze numarul de aparitii al caracterului c in text
#include <iostream>
#include <string.h>

using namespace std;

char text[71],c,aux[71],p;
int x,k;

int main() {
    cin.getline(text, 71);
    cout << "Introduceti caracterul: "; cin >> c; p=toupper(c);
    while(strchr(text, c)!=NULL || strchr(text,p)!=NULL) {
        if(strchr(text,c)!=NULL){
            x=strchr(text, c)-text;
            strcpy(aux, text+x+1);
            strcpy(text+x, aux);
        }
        else if(strchr(text,p)!=NULL){
            x=strchr(text, p)-text;
            strcpy(aux, text+x+1);
            strcpy(text+x, aux);
        }
        k++;
    }
    cout << k;
    return 0;
}