//afisati numarul literelor mari, literelor mici si al cifrelor dintr un sir de caractere
#include <iostream>
#include <string.h>

using namespace std;

char text[255];
int x,i,kl,kL,kd;

int main() {
    cin.getline(text, 255);
    x=strlen(text);
    for(i=0;i<x;i++) {
        if(islower(text[i])!=NULL)
            kl++;
        else if(isupper(text[i])!=NULL)
            kL++;
        else if(isdigit(text[i])!=NULL)
            kd++;
    }
    cout << "Se gasesc " << kl << " de litere mici, " << kL << " de litere mari si " << kd << " cifre.";
    return 0;
}