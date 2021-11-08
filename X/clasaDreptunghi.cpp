//Fie clasa Dreptunghi cu atributele lungime si latime si metodele constructor cu initializare, citireDrept, afisareDrept, calculArie.
//Sa se scrie functia Dubleaza – functie prietena (friend) a clasei Dreptunghi care va permite accesul la datele membre lungime şi latime (considerate private) ale diferitelor obiecte de tipul
//Dreptunghi si care sa permita dublarea dimensiunilor unui dreptunghi (obiect al clasei Dreptunghi).
//Sa se afiseze dimensiunile atat pentru dreptunghiul initial cat si pentru dreptunghiul rezultat.
#include <iostream>

using namespace std;

class Dreptunghi {
    int lungime,latime;
    public:
    void citireDrept(int,int);
    void afisareDrept(int, int);
    int calculArie (void) {
        return(lungime*latime);
    }
    friend Dreptunghi Dubleaza (Dreptunghi);
};
    void Dreptunghi::citireDrept(int a,int b) {
        lungime=a;
        latime=b;
    }
    void Dreptunghi::afisareDrept(int m, int n) {
        int i,j,v[11][11];
        lungime=m;
        latime=n;
        for(i=0;i<=m;i++)
            for(j=0;j<=n;j++)
                    v[i][j]=0;
        for(i=0;i<latime;i++)
        {
            cout << endl;
            for(j=0;j<lungime;j++)
                {
                    if(i==0 || j==0 || i==latime-1 || j==lungime-1)
                        cout << v[i][j] << " ";
                    else
                        cout << "  ";
                }
        }
    }
    Dreptunghi Dubleaza (Dreptunghi dreptunghiParam) {
        Dreptunghi dreptunghiRez;
        dreptunghiRez.lungime=dreptunghiParam.lungime*2;
        dreptunghiRez.latime=dreptunghiParam.latime*2;
        return dreptunghiRez;
    }
int x,y;
int main()
{
    cin >> x >> y;
    Dreptunghi dreptunghiA,dreptunghiB;
    dreptunghiA.citireDrept(x,y);
    dreptunghiB=Dubleaza(dreptunghiA);
    cout << endl << "Aria primului dreptunghi:" << dreptunghiA.calculArie() << endl;
    cout << "Aria dreptunghiului dublat:" << dreptunghiB.calculArie() << endl;
    return 0;
}
