//sa se elimine toate spatiile dintr un text
#include <iostream>
#include <string.h>

using namespace std;

char text[100],aux[100];
int x;

int main() {
    cin.getline(text, 100);
    while(strchr(text, ' ')!=NULL) {
        x=strchr(text, ' ')-text;
        strcpy(aux, text+x+1);
        strcpy(text+x, aux);
    }
    cout << text;
    return 0;
}