//sa se elimine toate aparitiile vocalelor din sir
#include <iostream>
#include <string.h>

using namespace std;

char s[100], t[100];
int i;

int main() {
    cin.getline(s, 100);
    for(i=0;i<strlen(s);i++) {
        if(strchr("aeiou", s[i])!=NULL) {
            strcpy(t, s+i+1);
            strcpy(s+i, t);
            i--;
        }
    }
    cout << s;
    return 0;
}