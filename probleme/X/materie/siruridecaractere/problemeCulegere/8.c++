//sa se scrie un program care citeste mai multe linii de la tastatura si o tipareste pe cea mai lunga
#include <iostream>
#include <string.h>

using namespace std;

char vectorPro[10][100], propozitie[100];
int i,maxx,x,poz;

int main() {
    i=-1; maxx=0;
    do {
        i++;
        cin.getline(propozitie, 100);
        strcpy(vectorPro[i], propozitie);
        x=strlen(propozitie);
        if(x>maxx) {
            maxx=x;
            poz=i;
        }
    }while(strlen(propozitie)!=0);
    cout << vectorPro[poz];
    return 0;
}