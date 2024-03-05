#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        for(int i=0;i<nums.size();i++)
            map[nums[i]] = i;
        for(int i=0;i<nums.size();i++) {
            int y=target-nums[i];
            if(map.count(y) && map[y]!=i) return {i, map[y]};
        }
        return {};
    }
};