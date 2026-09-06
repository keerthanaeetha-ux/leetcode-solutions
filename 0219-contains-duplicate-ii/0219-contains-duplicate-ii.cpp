class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>nums_map;
        //gap between two duplicate elements should be lessthan or equal to k
        //that means the duplicate must be present in the next k elements of the current element 
        for(int i=0;i<nums.size();i++){
            if(nums_map.count(nums[i])){
                if(i-nums_map[nums[i]]<=k)return true;
            }
             nums_map[nums[i]]=i;

        }
        return false;
        
    }
};