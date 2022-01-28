//se citesc de la tasatatura mai multe linii. scrieti un program care sa tipareasca toate liniile mai scurte de 80 de caractere
#include <iostream>
#include <string.h>

using namespace std;

char vectorCuv[10][255], text[255];
int i,n,x;

int main() {
    do {
        cin.getline(text, 255);
        strcpy(vectorCuv[n], text);
        n++;
    }while(strlen(text)!=0);
    for(i=0;i<n;i++) {
        x=strlen(vectorCuv[i]);
        if(x<80)
            cout << vectorCuv[i] << endl;
    }
    return 0;
}