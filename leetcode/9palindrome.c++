class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long a=x,c,b=0;
        while(a!=0) {
            c=a%10;
            b=b*10+c;
            a/=10;
        }
        return b==x;
    }
};