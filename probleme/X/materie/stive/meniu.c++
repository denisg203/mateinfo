#include <iostream>

using namespace std;
int k,dim,v[30],opt,i;
int main() {
    k=-1;
    cout << "dim="; cin >> dim; v[dim]={0};
    do {
        cout << "Adaugare(1)\n";
        cout << "Stergere(2)\n";
        cout << "Afisare(3)\n";
        cout << "Iesire(4)\n";
        cin >> opt;
        switch(opt) {
            case 1: {           // adunarea unui element
                if(k<dim-1) {
                    k++; cin >> v[k];
                }
                else
                    cout << "Nu mai este loc in coada\nAlegeti alta optiune\n";
                break;
            }
            case 2: {           //eliminarea unui element
                if(k>-1) {
                    cout << "Iese " << v[k] << '\n';
                    for(i=1;i<=k;i++) {
                        v[i-1]=v[i];
                    }
                    k--;
                }
                else
                    cout << "Coada este vida\nAlegeti alta optiune\n";
                break;
            }
            case 3: {           //afisarea elementelor
                cout << "Vectorul arata asa: ";
                for(i=0;i<=k;i++)
                    cout << v[i] << " ";
                cout << '\n';
                break;
            }
        }
    } while(opt!=4);
    return 0;
}