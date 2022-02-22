//se citeste numele si prenumele unei persoane. afisati porecla. primele 2 din nume si primele 2 din prenume
#include <iostream>
#include <string.h>

using namespace std;

char nume[30];

int main() {
    cin.getline(nume, 20);
    char *buc=strtok(nume, " ");
    while(buc!=NULL) {
        cout << buc[0] << buc[1];
        buc=strtok(NULL, " ");
    }
    return 0;
}