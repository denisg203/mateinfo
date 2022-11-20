//se citeste un text. sa se afiseze toate cuvintele formate din k caractere
#include <iostream>
#include <string.h>

using namespace std;

char text[255];
int x,k;

int main() {
    cin.getline(text, 255);
    cout << "K="; cin >> k;
    char *cuv=strtok(text, " ");
    while(cuv!=NULL) {
        x=strlen(cuv);
        if(x==2)
            cout << cuv << " ";
        cuv=strtok(NULL, " ");
    }
    return 0;
}