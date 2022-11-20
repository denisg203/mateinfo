//scrieti un program care converteste un sir de caractere intr-un intreg. conversia se opreste odata cu intalnirea unui caracter care nu este cifra
#include <iostream>
#include <string.h>

using namespace std;

char text[100];
int i;

int main() {
    cin.getline(text, 100);
    while(isdigit(text[i])!=NULL && i<strlen(text)) {
        cout << text[i];
        i++;
    }
    return 0;
}