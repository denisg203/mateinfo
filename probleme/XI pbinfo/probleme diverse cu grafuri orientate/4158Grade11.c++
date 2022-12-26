#include <iostream>

using namespace std;

int n,m,x,y,ge[101],gi[101],k;

int main() {
    cin >> n >> m;
    for(int i=1;i<=m;i++)  {
        cin >> x >> y;
        ge[x]++; gi[y]++;
    }
    for(int i=1;i<=n;i++) {
        if(gi[i]!=0 && ge[i]!=0) {
            if(gi[i]%ge[i]==0) k++;
            if(ge[i]%gi[i]==0) k++;
        }
    }
    if(k==0) cout << "NU EXISTA";
    else {
        for(int i=1;i<=n;i++) {
            if(gi[i]!=0 && ge[i]!=0)
            if(gi[i]%ge[i]==0 || ge[i]%gi[i]==0) cout << i << " ";
        }
    }
    return 0;
}