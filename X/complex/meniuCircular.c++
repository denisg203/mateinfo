#include <iostream>

using namespace std;
int pInt,pIes,dim.v[30],opt,stare,i;
int main() {
    pInt=-1; pIes=-1;
    cout << "dim="; cin >> dim; v[dim]={0};
    do {
        cout << "Adaugare(1)\n";
        cout << "Stergere(2)\n";
        cout << "Afisare(3)\n";
        cout << "Iesire(4)\n";
        cin >> opt;
        switch(opt) {
            case 1: {
                stare=1;
                for(i=0;i<dim;i++)
                    if(v[i]==0)
                        stare=0;
                if(stare)
                    cout << "Nu se poate adauga\nTe rog alege alta optiune\n";
                else {
                    if(pInt<dim-1) {
                        pInt++; cin >> v[pInt];
                    }
                    else {
                        pInt=-1;
                        if(v[pInt+1]==0) {
                            pInt++; cin >> v[pInt];
                        }
                    }
                }
                break;
            }
            case 2: {
                stare=1;
                for(i=0;i<dim;i++)
                    if(v[i]!=0)
                        stare=0;
                if(stare)
                    cout << "Coada este vida\nTe rog alege alta optiune\n";
                else {
                    if(pIes<dim-1) {
                        pIes++; cout << "Se va elimina " << v[pIes] << '\n';
                        v[pIes]=0;
                    }
                    else {
                        pIes=0;
                        cout << "Se va elimina " << v[pIes] << '\n';
                        v[pIes]=0;
                    }
                }
                break;
            }
            case 3: {
                cout << "Vectorul arata asa: ";
                for(i=0;i<dim;i++)
                    cout << v[i] << " ";
                cout << '\n';
                break;
            }
        }
    } while(opt!=4);
    return 0;
}