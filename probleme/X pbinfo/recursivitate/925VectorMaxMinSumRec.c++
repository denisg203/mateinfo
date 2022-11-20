#include <iostream>

using namespace std;

int maxi=0,mini=200000,sum=0;

void P(int x[100], int n, int &mini, int &maxi, int &sum) {
    if(n==1) maxi=mini=sum=x[0];
    else {
        P(x,n-1,mini,maxi,sum);
        if(x[n-1]<mini) mini=x[n-1];
        if(x[n-1]>maxi) maxi=x[n-1];
        sum+=x[n-1]; 
    }
}