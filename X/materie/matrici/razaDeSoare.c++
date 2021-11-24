// Se da o cutie care are peretii din sticla, si pe o raza de soare din coltul stanga sus, sa se afiseze pe unde s a plimbat
// raza de soare

#include <iostream>
#include <iomanip>

using namespace std;

int m,n,i,j,d,pozi,pozj,z;

int main () {
    cout << "Introdu numarul de linii: "; cin >> m;
    cout << "Introdu numarul de coloane: "; cin >> n;
    int A[m+1][n+1];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            A[i][j] = 0; 
    d = 1; pozi = -1; pozj = -1; z = 0;
    bool sem = true;

    while (sem) {
        switch (d) {

            case 1:
                if (pozi == m-1 && pozj == n-1) {
                    sem = false;
                }
                if (pozi == m) {
                    d = 2;
                    pozi--;
                    pozj--;
                }
                else if (pozj == n) {
                    d = 4;
                    pozi--;
                    pozj--;
                }
                else {
                    pozi++;
                    pozj++;
                    if (A[pozi][pozj] == 0) {
                        z++;
                        A[pozi][pozj] = z; 
                    }
                }
                break;

            case 2:
                if (pozi == 0 && pozj == n-1) {
                    sem = false;
                }
                if (pozi == -1) {
                    d = 1;
                    pozi++;
                    pozj--;
                } 
                else if (pozj == n) {
                    d = 3;
                    pozi++;
                    pozj--;
                    }
                else {
                    pozi--;
                    pozj++;
                    if (A[pozi][pozj] == 0) {
                        z++;
                        A[pozi][pozj] = z;
                    }
                }
                break;

            case 3:
                if(pozi==0 && pozj==0) {
                    sem = false;
                }
                if (pozi == -1) {
                    pozi++;
                    pozj++;
                    d = 4;
                } 
                else if (pozj == -1) {
                    pozi++;
                    pozj++;
                    d = 2;
                } 
                else {
                    pozi--;
                    pozj--;
                    if (A[pozi][pozj] == 0) {
                        z++;
                        A[pozi][pozj] = z;
                        }
                }
                break;

            case 4:

                if(pozi==m-1 && pozj==0) {
                    sem = false;
                }
                if(pozi == m ) {
                    d = 3;
                    pozi--;
                    pozj++;
                } 
                else if (pozj == -1 ) {
                    d = 1;
                    pozi--;
                    pozj++;
                } 
                else {
                    pozi++;
                    pozj--;
                    if (A[pozi][pozj] == 0) {
                        z++;
                        A[pozi][pozj] = z; 
                    }
                }
                break;

        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << A[i][j];
        }
        cout << endl;
    }
    return 0;
}
// © denis sosu nicolas