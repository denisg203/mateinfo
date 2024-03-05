#include <iostream>
#include <cstring>
#include <string>
#include <string.h>

using namespace std;

class Solution {
public:
    bool isValid(char s[1000]) {
        char aux[1000];
        while(strstr(s, "()") !=NULL) {
        int poz = strstr(s, "()") - s;
        strcpy(aux,s+poz+2);
        strcpy(s+poz, aux);
    }
    while(strstr(s, "[]") !=NULL) {
        int poz = strstr(s, "[]") - s;
        strcpy(aux,s+poz+2);
        strcpy(s+poz, aux);
    }
    while(strstr(s, "{}") !=NULL) {
        int poz = strstr(s, "{}") - s;
        strcpy(aux,s+poz+2);
        strcpy(s+poz, aux);
    }
    if(strlen(s) > 0) 
        return false;
    else 
        return true;
    }
};