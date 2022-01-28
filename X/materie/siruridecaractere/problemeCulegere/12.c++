//se citeste o fraza de cel mult 70 de caractere. sa se afiseze cuvintele in ordine alfabetica
#include <iostream>
#include <string.h>

using namespace std;

char text[71], vectorCuv[50][71], aux[71];
int total,x,i,j;

int main() {
    cin.getline(text, 71);
    char *cuv = strtok(text, " ");
    while(cuv!=NULL) {
        x=strlen(cuv);
        if(cuv[x-1]==' ' || cuv[x-1]==',' || cuv[x-1]=='.') { //luam primul cuvant si verificam daca are dupa el ,. sau spatiu
            strcpy(aux, cuv+x); strcpy(cuv+x-1, aux);  //daca are, il eliminam
        }
        strcpy(vectorCuv[total], cuv); //bagam in vector
        total++;
        cuv = strtok(NULL, " "); //trecem la urmatorul cuvant
    }
    for(i=0;i<total-1;i++) { //metoda sortarii directe
        for(j=i+1; j<total;j++) {
            if(strcmp(vectorCuv[i],vectorCuv[j])>0) {
                strcpy(aux, vectorCuv[i]);
                strcpy(vectorCuv[i], vectorCuv[j]);
                strcpy(vectorCuv[j], aux);
            }
        }
    }
    for(i=0;i<total;i++) {
        cout << vectorCuv[i] << endl;
    }
    return 0;
}