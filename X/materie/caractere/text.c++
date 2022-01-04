#include <iostream>
#include <string>
#include <string.h>

using namespace std;

char text[200];
int x,i,ms,md,j;

int main() {
    cin.getline(text, 200); x=strlen(text);
    for(i=0;i<=x;i++) {
        if(isupper(text[i])!=0)
            cout << text[i];
    }
    cout << endl;
    for(i=0;i<=x;i++) {
        if(isdigit(text[i])!=0)
            cout << text[i];
    }
    cout << endl; ms=0; md=0; i=0;
    while(i<=x) {
        while(text[i]!=' ') {
            md++; i++;
        }
        md--;
        for(j=ms+1;j<md;j++) {
            if(isupper(text[j]))
                text[j]=text[j]+32;
        }
        if(islower(text[ms]))
            text[ms]=text[ms]-32;
        if(islower(text[md]))
            text[md]=text[md]-32;
        md+=2; ms=md; i++;
    }
    for(i=0;i<=x;i++) {
        cout << text[i];
    }
    return 0;
}