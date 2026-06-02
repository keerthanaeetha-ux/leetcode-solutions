#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
//Using Hash Map
//Time Complexity :O(n)
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>occurs;
        for(int num:nums){
            if(occurs[num]>=1)
            return true;
            occurs[num]++;
        }
        return false;
        
        
    }
};