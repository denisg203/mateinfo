//Se citesc n numere. Sa se creeze un vector direct ordonat.

#include <iostream>

using namespace std;
int n,c,i,t,j,l,v[10];
int main() {
    cin >> n; c=0;              //c reprezinta numarul elementelor din vector
    for(i=0;i<n;i++) {
        cin >> t;               //t reprezinta numarul adaugat in vector
        j=0;
        while(j<c && v[j]<t)    //operatia de verificare unde se va introduce numarul
            j++;
        for(l=c-1;l>=j;l--)     // adaugarea elementului
            v[l+1]=v[l];
        v[j]=t;
        c++;
    }
    for(i=0;i<n;i++)
        cout << v[i] << " ";
    return 0;
}