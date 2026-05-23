#include<iostream>
using namespace std;
//time complexity:O(n)
//space complexity:O(1)
#include<vector>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int val:nums){
            ans=ans^val;
    }
    return ans;
}
};