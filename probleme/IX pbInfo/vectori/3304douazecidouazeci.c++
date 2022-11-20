#include <iostream>

using namespace std;

int v[100],n,sem;

int main() {
    cin >> n;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++) if(v[i]*v[j]==2020) sem=1;
    if(sem) cout << "DA";
    else cout << "NU";
    return 0;
}