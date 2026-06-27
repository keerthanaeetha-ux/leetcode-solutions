#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int p=0;
        int ni=1;
        int x=nums.size();
        vector<int> ans(x);
        for(int n:nums){
            if(n>0){
                ans[p]=n;
                p=p+2;
            }else if(n<0){
                ans[ni]=n;
                ni+=2;
            }
        }
        return ans;
    }
};