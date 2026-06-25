#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>numsmap;
        for(int i:nums1){
            numsmap[i]++;
        }
        for(int j:nums2){
            if(numsmap.find(j)!=numsmap.end()&&numsmap[j]!=0){
                numsmap[j]--;
                ans.push_back(j);
                
            }
            
        }
        return ans;
        
    }
};