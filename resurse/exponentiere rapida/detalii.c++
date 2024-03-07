//avem mai multi algoritmi

//Un algoritm care implementează această metodă va avea complexitate liniară, O(n):

int Putere(int A , int n)
{
    int P = 1 ;
    for(int i = 1 ; i <= n ; i ++)
        P = P * A;
    return P;
}

//O metodă mai bună este cea numită exponențierea rapidă , sau ridicarea la putere în timp logaritmic, complexitatea sa fiind O(log2n). 
//Ea se bazează pe următoarea formulă:
//A^n este 1 daca n = 0
//         A*A^n-1 daca n - impar
//         (A^n/2)^2 daca n - par

int Putere(int A , int n)
{
    if(n == 0)
        return 1;
    if(n % 2 == 1)
        return A * Putere(A , n - 1);
    int P = Putere(A , n / 2);
    return P * P;
}