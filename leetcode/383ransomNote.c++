#include <iostream>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hash[256] = {0};
        for(int i=0;i<magazine.length();i++) {
            hash[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++) {
            hash[ransomNote[i]]--;
        }
        for(int i=0;i<256;i++) {
            if(hash[i]<0) return false;
        }
        return true;
    }
};