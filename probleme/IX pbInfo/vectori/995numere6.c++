#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere6.in");
ofstream g("numere6.out");

int x,y,a[10],c,i;

int main() {
    f >> x >> y;
    while(x!=0) {
        c=x%10;
        a[c]++;
        x/=10;
    }
    while(y!=0) {
        c=y%10;
        a[c]++;
        y/=10;
    }
    for(i=9;i>=0;i--)
        while(a[i]>0) {
            g << i;
            a[i]--;
        }
    return 0;
}