//Sa se ridice 2 la puterea n. asdkasdjioasdias 

#include <iostream>

using namespace std;

int n,i,j,v[101],k;

int main()
{
    cout << "Introduceti la ce putere vreti sa ridicati cifra 2: "; cin >> n;
    for(i=0;i<100;i++)
        v[i]=0;
    v[100]=1;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=100;j++)
            v[j]=v[j]*2;
        for(j=100;j>=0;j--)
            if(v[j]>9)
            {
                v[j-1]++; v[j]=v[j]%10;
            }
    }
    k=0;
    while(v[k]==0)
        k++;
    for(i=k;i<=100;i++)
        cout <<v[i];
    return 0;
}
