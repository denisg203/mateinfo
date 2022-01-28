//cel mult 20 de caractere. sa se afiseze toate posibilitatile de cuvinte ce se pot forma din cuvantul citit eliminand o singura litera
#include <iostream>
#include <string.h>

using namespace std;

char text[21],aux1[21],aux2[21];
int x,i;

int main() {
    cin.getline(text, 21); x=strlen(text);
    for(i=0;i<x-1;i++) {
        strcpy(aux1,text);
        strcpy(aux2, aux1+i+1);
        strcpy(aux1+i,aux2);
        cout << aux1 << " ";
    }
    return 0;
}