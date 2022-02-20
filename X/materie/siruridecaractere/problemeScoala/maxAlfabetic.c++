//afisati in ordine alfabetica cuvintele de lungime maxima dintr-un text
#include <iostream>
#include <string.h>

using namespace std;

char text[100], vectorCuv[20][50], vectorMax[20][50], aux[100];
int x,maxx,total,i,j,k;

int main() {
    cin.getline(text, 100); k=-1;
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
        if(x==maxx) {
            k++;
            strcpy(vectorMax[k],vectorCuv[i]);
        }
    }
    for(i=0;i<k;i++) {
        for(j=i+1;j<=k;j++) {
            if(strcmp(vectorMax[i],vectorMax[j])>0) {
                strcpy(aux, vectorMax[i]);
                strcpy(vectorMax[i], vectorMax[j]);
                strcpy(vectorMax[j], aux);
            }
        }
    }
    for(i=0;i<=k;i++) {
        cout << vectorMax[i] << endl;
    }
    return 0;
}