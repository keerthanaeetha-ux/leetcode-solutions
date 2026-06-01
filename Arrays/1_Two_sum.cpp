#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
//Time Complexity :
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>numsMap;
    for(int i=0;i<nums.size();i++){
        numsMap[nums[i]]=i;//adding indexes into the hashmap
    }
    for(int i=0;i<nums.size();i++){
     int   num2=target-nums[i];
        if(numsMap.count(num2)&&numsMap[num2]!=i){
            return {i,numsMap[num2]};
        }
    }
    return{};
    
    }
};