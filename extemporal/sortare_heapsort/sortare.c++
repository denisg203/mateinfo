#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sortare.in");
ofstream g("sortare.out");

void scufundare (int v[], int i, int n) {
    int pmin=i, l=2*i+1, r=2*i+2;
    if(l<n && v[l]<v[pmin]) pmin=l;
    if(r<n && v[r]<v[pmin]) pmin=r;
    if(pmin!=i) {
        swap(v[i], v[pmin]);
        scufundare(v,pmin,n);
    }
}

void heapSort (int v[], int n) {
    for(int i=n/2-1;i>=0;i--) scufundare(v,i,n);
    for(int i=n-1;i>0;i--) {
        swap(v[0],v[i]);
        scufundare(v,0,i);
    }
}

void write(int v[], int n) {
    for(int i=0;i<n;i++) g << v[i] << " ";
}

int v[100],n,i;

int main() {
    f >> n;
    for(i=0;i<n;i++) f >> v[i];
    heapSort(v,n);
    write(v,n);
    return 0;
}