//sa se afiseze toate prefixele si toate sufixele unui cuvant citit de la tastatura
#include <iostream>
#include <string.h>

using namespace std;

char cuvant[16];
int i,x,k,j;

int main() {
    cin.getline(cuvant, 16);
    x=strlen(cuvant);
    cout << "Afisare prefixe: " << endl;
    for(i=0; i<x; i++) {
        for(j=0; j<=i; j++) {
            cout << cuvant[j];
        }
        cout << endl;
    }
    cout << "Afisare sufixe: " << endl;
    for(i=0;i<x;i++) {
        for(j=i; j<x; j++) {
            cout << cuvant[j];
        }
        cout << endl;
    }
    return 0;
}