//se citeste numele si prenumele unei persoane. afisati porecla. primele 2 din nume si primele 2 din prenume
#include <iostream>
#include <string.h>

using namespace std;

char nume[20], prenume[20];

int main() {
    cin.getline(nume, 20); cin.getline(prenume, 20);
    cout << nume[0] << nume[1] << prenume[0] << prenume[1];
}