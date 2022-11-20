//se dau 3 siruri, sa se inlocuiasca toate aparitiile lui s1 cu s2 in s3
#include <iostream>
#include <string.h>

using namespace std;

char text[255],cuv1[20],cuv2[20],vectorCuv[50][255];
int total,i,x;

int main() {
    cin.getline(text, 255);
    cout << "Introduceti cele 2 cuvinte care vreti sa fie schimbate unul cu celalalt: "; cin >> cuv1 >> cuv2;
    char *cuv=strtok(text, " ");
    while(cuv!=NULL) {
        if(strcmp(cuv,cuv1)==0) {
            strcpy(cuv,cuv2);
        }
        strcpy(vectorCuv[total], cuv);
        total++;
        cuv=strtok(NULL, " ");
    }
    for(i=0;i<total;i++) {
        cout << vectorCuv[i] << " ";
    }
    return 0;
}