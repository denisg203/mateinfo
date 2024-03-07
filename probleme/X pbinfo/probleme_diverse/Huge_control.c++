#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream f("hugecontrol.in");
ofstream g("hugecontrol.out");

int digit;
char ch;

int main() {
    while(f >> ch) {
        digit+=int(ch)-48;
        if(digit>9) digit=digit%10+digit/10;
    }
    g << digit;
    return 0;
}