//Write a function that takes in an array of words and returns the smalest array of characters needed to form all the words. The characters dont`t need to be in particular order.
//Input : words=["this", "that", "did", "deed", "them!", "a"] Note: the input words won`t contain any spaces; however they might contain punctuation and/or special characters.
//Output: ["t", "t", "h", "i", "s", "a", "d", "d", "e", "e", "m", "!"]
#include <iostream>
#include <string>

using namespace std;
int n,i,j,str,ascii[256],test[256];
string words[30],aux;
char k;
int main() {
    cout << "Introduce the amount of words you want in the array: "; cin >> n; cout << "Please introduce the words: ";
    for(i=0;i<n;i++)
        cin >> words[i];
    for(i=0;i<n;i++) {
        str=words->length();
        aux=words[i];
        int test[256]={0};
        for(j=0;j<=str;j++) {
            k=aux[j];
            test[k]++;
        }
        for(j=0;j<=str;j++) {
            k=aux[j];
            if(test[k]>ascii[k])
                ascii[k]=test[k];
        }
    }
    for(i=0;i<256;i++) {
        while(ascii[i]>0) {
            cout << char(i) << " ";
            ascii[i]--;
        }
    }
    return 0;
}