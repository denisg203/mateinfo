#include <iostream>
#include <cstring>

using namespace std;

int nr_vocale(char s[10000]) {
    if(s[0]==NULL) return 0;
    int n=strlen(s);
    char ch=s[n-1];
    s[n-1]=NULL;
    if(strchr("aeiouAEIOU", ch)) return 1+nr_vocale(s);
    else return nr_vocale(s);
}