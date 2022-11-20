//se citeste o fraza de maxim 70 de caractere. sa se afiseze toate perechile de vocale consecutive din fraza, precum si numarul acestora
#include <iostream>
#include <string.h>

using namespace std;

char text[70];
int i,k;

int main() {
    cin.getline(text, 70);
    for(i=0;i<strlen(text);i++) {
        if(text[i]=='a' || text[i]=='e' || text[i]=='i' || text[i]=='o' || text[i]=='u')
            if(text[i+1]=='a' || text[i+1]=='e' || text[i+1]=='i' || text[i+1]=='o' || text[i+1]=='u') {
                cout << text[i] << text[i+1] << " "; 
                k++;
            }
    }
    cout << k;
    return 0;
}