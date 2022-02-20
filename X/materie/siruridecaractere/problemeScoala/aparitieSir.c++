//se dau doua siruri. de cate ori apare al doilea in primul?
#include <iostream>
#include <string.h>

using namespace std;

char str1[100], str2[100];
int k;

int main() {
    cout << "Introduceti primul sir: "; cin.getline(str1, 100);
    cout << "Introduceti al doilea sir: "; cin.getline(str2, 100);
    char *cuv = strtok(str1, " ");
    while(cuv!=NULL) {
        if(strcmp(str2,cuv)==0) {
            k++;
        }
        cuv=strtok(NULL, " ");
    }
    cout << k;
    return 0;
}