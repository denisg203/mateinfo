//se citeste un nr. sa se construiasca matricea A[n*n] cu termeni din sirul lui fibonacci
#include <iostream>

using namespace std;

int n,v[100][100],i,j;

int main() {
    cout << "N="; cin >> n;
    int x=1;
    int y=0;
    int z=x+y;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            v[i][j]=z;
            x=y;
            y=z;
            z=x+y;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}