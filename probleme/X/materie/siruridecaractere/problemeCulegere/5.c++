//se da un sir de caractere c si o multime a de caractere. sa se determine care elemente din multimea a apar in sirul c
#include <iostream>
#include <string.h>

using namespace std;

char c[100];
int i,n;

int main() {
    cin.getline(c, 100);
    char a[]={'a', 'x' , 'g' , 'e' , 'v'};
    while(a[n]!='\0')
        n++;
    for(i=0;i<n;i++) {
        if(strchr(c, a[i])!=NULL)
            cout << a[i] << " ";
    }
    return 0;
}