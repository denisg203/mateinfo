#include <iostream>

using namespace std;

int a[10][10],n,l,k,i,j,p;

int main()
{
    i=0; j=0; k=1; l=0; p=1;
    cout << "Introduceti dimensiunea matricei: "; cin >> n;
    a[i][j]=k;
    i++; l++;
    while((i+1)*(j+1)<=n*n)
    {
        while(i+j<n-1) // parcurgem partea de deasupra diagonalei secundare
            {
                k++;
                a[i][j]=k;
                i--; j++;
                if(i==-1)
                {
                    l++; i=l; j=0;
                }
            }
        while(i+j==n-1) // parcurgem diagonala secundara
        {
            k++;
            a[i][j]=k;
            i--; j++;
            if(i==-1)
            {
                i=l; j=p; p++;
            }
        }
        if(i+j>n-1) // parcurgem partea de sub diagoanala secundara
        {
            k++;
            a[i][j]=k;
            i--; j++;
            if(j==n)
            {
                i=l; j=p; p++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout << endl;
        for(j=0;j<n;j++)
            cout << a[i][j] << " ";
    }
    return 0;
}
