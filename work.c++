#include <iostream>
#include <fstream>

using namespace std;

ifstream f;

int n1,n2,n3;

int main() {
    f.open("bac.txt");
    f >> n1 >> n2 >> n3;
    while(!f.eof()) {
        f >> x;
        
    }
}