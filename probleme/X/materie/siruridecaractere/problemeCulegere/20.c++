//cel mult 70 de caractere. sa se afiseze cuvintele de lungime maxima din text
#include <iostream>
#include <string.h>

using namespace std;

char text[71],vectorCuv[25][50];
int total,i,maxx,x;

int main() {
    cin.getline(text,71);
    char *cuv=strtok(text, " ");
    while(cuv!=NULL) {
        x=strlen(cuv);
        if(x>maxx)
            maxx=x;
        strcpy(vectorCuv[total],cuv);
        total++;
        cuv=strtok(NULL, " ");
    }
    for(i=0;i<total;i++) {
        x=strlen(vectorCuv[i]);
        if(x==maxx)
            cout << vectorCuv[i] << " ";
    }
    return 0;
}