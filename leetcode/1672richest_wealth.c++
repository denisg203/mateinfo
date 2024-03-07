#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0,max=0;
        for(int i=0;i<accounts.size();i++) {
            for(int j=0;j<accounts[i].size();j++) {
                sum+=accounts[i][j];
            }
            if(sum>max) max=sum;
            sum=0;
        }
        return max;
    }
};