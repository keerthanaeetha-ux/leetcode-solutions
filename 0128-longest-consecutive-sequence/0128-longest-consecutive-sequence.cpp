class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //otpimal hasing approach
        if(nums.size()==0)return 0;
        int maxlen=1;
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int count=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    count+=1;
                    x+=1;
                }
                maxlen=max(maxlen,count);
            }
        }
        return maxlen;
        
    }
};