//sa se elimine toate aparitiile caracterului c din sir
#include <iostream>
#include <string.h>

using namespace std;

char c,s[100],t[100];
int i;

int main() {
    cin.getline(s, 100);
    cout << "Ce caracter vreti sa eliminati? "; cin >> c;
    while(strchr(s, c)!=NULL) {
        for(i=0;i<strlen(s);i++) {
            if(s[i]==c) {
                strcpy(t, s+i+1);
                strcpy(s+i, t);
                i--;
            }
        }
    }
    cout << s;
    return 0;
}