class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int news=0;
        
        for(int i:nums){
            if(i!=val){
                
            
            nums[news]=i;
            news++;
            }
        }
        return news ;
    }
};