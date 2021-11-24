#include <iostream>

using namespace std;

struct perechi
{
    char ch;
    int val , bani;
}a[11];
bool litM(char c)
{
    return c >= 'A' && c <= 'E';
}
int main()
{
    a[1].ch = 'A' , a[1].val = 300 , a[1].bani = 0;
    a[2].ch = 'B' , a[2].val = 300 , a[2].bani = 0;
    a[3].ch = 'C' , a[3].val = 300 , a[3].bani = 0;
    a[4].ch = 'D' , a[4].val = 300 , a[4].bani = 0;
    a[5].ch = 'E' , a[5].val = 300 , a[5].bani = 0;
    a[6].ch = 'a' , a[6].val = 300 , a[6].bani = 0;
    a[7].ch = 'b' , a[7].val = 300 , a[7].bani = 0;
    a[8].ch = 'c' , a[8].val = 300 , a[8].bani = 0;
    a[9].ch = 'd' , a[9].val = 300 , a[9].bani = 0;
    a[10].ch = 'e' , a[10].val = 300 , a[10].bani = 0;
    int n;
    cin >> n;
    char s , t;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> s >> t;
        int a1 , b;
        if(litM(s))
            a1 = s - 64;
        else
            a1 = s - 91;
        if(litM(t))
            b = t - 64;
        else
            b = t - 91;
        a[a1].bani += a[b].val , a[a1].val += 50;
        a[b].val -= 50;
        if(a[a1].val > 1000)
            a[a1].val = 1000;
        if(a[b].val < 0)
            a[b].val = 0;
    }
    for(int i = 1 ; i <= 10 ; ++i)
    {
        cout << a[i].ch << ' ' << a[i].bani << endl;
    }
    return 0;
}