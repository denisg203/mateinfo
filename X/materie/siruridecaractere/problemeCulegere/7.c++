//sa se elimine toate spatiile inutile
#include <string.h>
#include <iostream>

using namespace std;

char text[100],aux[100];
int i,j;

int main() {
    cin.getline(text, 100); i=0;
    while(text[i]==' ')
        i++;
    strcpy(aux, text+i); strcpy(text, aux); //eliminam toate spatiile de la inceput
    for(i=0;i<=strlen(text);i++) {
        if(text[i]==' ' && text[i+1]==' ') {
            j=i+1;
            while(text[j]==' ') {
                strcpy(aux,text+j+1); strcpy(text+j, aux);  // eliminam toate spatiile necesare dintre cuvinte
            }
            if(text[j]=='.' || text[j]==',' || text[j]==';') {  //o ultima verificare pt .,;
                j--;
                strcpy(aux, text+j+1); strcpy(text+j, aux);
            }
        }
    }
    cout << text;
    return 0;
}