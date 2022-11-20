//se da un vector cu n elemente. sa se calculeze suma elementelor

#include <iostream>

using namespace std;

int suma(int v[], int st, int dr) {
    if(st==dr) return v[st]; // problema elementara
    else {
        int m=(st+dr)/2; //calculam mijlocul, pt impartirea in subprobleme
        int s1=suma(v, st, m); // rezolvarea primei subprobleme
        int s2=suma(v, m+1, dr); // rezolvarea celei de a doua subprobleme
        return s1+s2;
    }
}

int main() {
    int v[101], n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> v[i];
    cout << suma(v,0,n-1);
    return 0;
}