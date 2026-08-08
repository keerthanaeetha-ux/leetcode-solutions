class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Modified Binary search
        //Time complexity O(log n)
        int st=0;
        int en=nums.size()-1;
        while(st<=en){
            int mid=st+(en-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[st]<=nums[mid]){//left sorted
                if(nums[st]<=target && target<=nums[mid]){
                    en=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else{//right sorted
                if(nums[mid]<=target && target<=nums[en]){
                    st=mid+1;
                }else{
                    en=mid-1;
                }
            }
        }
        return -1;
        
    }
};