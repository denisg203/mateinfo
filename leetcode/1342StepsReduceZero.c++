#include <iostream>

using namespace std;

class Solution {
    public:
        int numberOfSteps(int num) {
            int k=0;
            while(num!=0) {
                if(num%2==0) {
                    num/=2; k++;
                }
                else {
                    num--; k++;
                }
            }
            return k;
        }
};