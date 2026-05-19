#include<iostream>
using namespace std;
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