#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=100001,max=-1,buy=0,sell=0,i,j;
        bool sem=false;
        for(i=1;i<=prices.size();i++) {
            if(prices[i]<min) {
                min=prices[i];
                buy=i;
            }
        }
        j=buy+1;
        for(i=j;i<=prices.size();i++) {
            if(prices[i]>max) {
                max=prices[i];
                sell=i;
                sem=true;
            }
        }
        if(sem) return sell;
        else return 0;
    }
};