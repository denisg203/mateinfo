//sa se verifice daca doua cuvinte introduse de la tastatura sunt rime(ultimele p caractere coincid)
#include <iostream>
#include <string.h>

using namespace std;

char cuvant1[10], cuvant2[10], aux1[10], aux2[10];
int p,x,y;

int main() {
    cout << "Introduceti primul cuvant: "; cin.getline(cuvant1, 20);
    cout << "Introduceti al doilea cuvant: "; cin.getline(cuvant2, 20);
    cout << "Introduceti p: "; cin >> p;
    x=strlen(cuvant1); y=strlen(cuvant2);
    strcpy(aux1, cuvant1+(x-p)); strcpy(aux2, cuvant2+(y-p));
    if(strcmp(aux1, aux2)==0)
        cout << "da";
    else 
        cout << "nu";
    return 0;
}