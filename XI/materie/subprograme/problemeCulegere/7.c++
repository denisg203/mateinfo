#include <iostream>

using namespace std;

int v[20],n,i,j,sem,x,k;

int verificare(int x,int i) {
    sem=0;
    for(j=i+1;j<n;j++) {
        if(v[j]==x) {
            sem=1; break;
        }
    }
    return sem;
}

int main() {
    cin >> n;
    for(i=0;i<n;i++) 
        cin >> v[i];
    for(i=0;i<n;i++) {
        while(verificare(v[i], i)) {
            j=i+1; x=v[i];
            while(x!=v[j])
                j++;
            for(k=j;k<n-1;k++)
                v[k]=v[k+1];
            n--;
        }
    }
    for(i=0;i<n;i++)
        cout << v[i] << " ";
    return 0;
}