#include <iostream>

using namespace std;

int s,k,maxim,n,v[10],i;

int sumaComponente(int n) {
    for(i=0;i<n;i++) {
        s+=v[i];
    }
    return s;
}

int nrComponenteImpare(int n) {
    for(i=0;i<n;i++)
        if(v[i]%2==1)
            k++;
    return k;
}

int valoareMaxima(int ) {
    maxim=v[0];
    for(i=1;i<n;i++)
        if(v[i]>maxim)
            maxim=v[i];
    return maxim;
}

int main() {
    cin >> n;
    for(i=0;i<n;i++) 
        cin >> v[i];
    for(i=0;i<n;i++) {
        s=sumaComponente(n);
        k=nrComponenteImpare(n);
        maxim=valoareMaxima(n);
    }
    cout << s << '\n' << k << '\n' << maxim;
}