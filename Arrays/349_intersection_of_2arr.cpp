#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        for(int i:nums1){
            m[i]=1;
        }
        for(int j:nums2){
            if(m.find(j)!=m.end()){
                m[j]=2;
            }
        }
        vector<int>ans;
        for(auto k:m){
            if(k.second==2){
                ans.push_back(k.first);
            }
        }
return ans;
        
    }
};