// A company wants to transmit data over the telepohne, but they are concerned that their phones may be tapped. All of their data is transmitted as four-digit integers. 
// They have asked you to write a program that will encrypt their data so that it may be transmitted more securely.
// Your program should read a four-digit integer and encrypt it as follows: Replace each digit by the remainder after the sum of that digit and 7 is divided by 10. ((digit+7)%10)
// Then swap the first digit with the third digit and the second digit with the last one. Then print encrypted integer. Write a separate program that will encrypt a four-digit integer and decrypt it to form the original number. abcd=cdab
// Use '0000' to terminate the program.
#include <iostream>

using namespace std;

int encrypt(int number) {
    int n1=number%10;
    n1=(n1+7)%10;
    int n2=number/10%10;
    n2=(n2+7)%10;
    int n3=number/100%10;
    n3=(n3+7)%10;
    int n4=number/1000;
    n4=(n4+7)%10;
    int encrypted = n2*1000+n1*100+n4*10+n3;
    return encrypted;
}

int decrypt(int number) {
    int n1=number%10;
    n1=(n1+3)%10;
    int n2=number/10%10;
    n2=(n2+3)%10;
    int n3=number/100%10;
    n3=(n3+3)%10;
    int n4=number/1000;
    n4=(n4+3)%10;
    int decrypted = n2*1000+n1*100+n4*10+n3;
    return decrypted;
}

int number,x,opt,aux,k,i;
int main() {
    do {
        k=0;
        cout << "\nDo you want to encrypt a number(1) or decrypt one(2)? If you want to exit introduce 0000.\n";
        cin >> opt;
        switch(opt) {
            case 1: {
                cout << "\nEnter a four-digit number to be encrypted: "; cin >> number;
                x=encrypt(number);
                aux=x;
                while(aux!=0) {
                    k++;
                    aux/=10;
                }
                k=4-k;
                cout << "\nEncrypted number is ";
                if(k!=4) {
                    for(i=1;i<=k;i++)
                        cout << "0";
                }
                cout << x;
                break;
            }
            case 2: {
                cout << "\nEnter a four-digit number to be decrypted: "; cin >> number;
                x=decrypt(number);
                aux=x;
                while(aux!=0) {
                    k++;
                    aux/=10;
                }
                k=4-k;
                cout << "\nDecrypted number is ";
                if(k!=4) {
                    for(i=1;i<=k;i++)
                        cout << "0";
                }
                cout << x;
                break;
            }
        }
    }while(opt!=0);
    cout << "\nGoodbye!:)";
    return 0;
}