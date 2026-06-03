#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i:nums){
            sum=sum+i;
        }
        int real_sum=(n*(n+1))/2;
        return real_sum-sum;
    }
        


        
    
};