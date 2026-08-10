class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        //pretend that array is of size 2n as we have to iterate twice
        int n=nums.size();
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i=2*n-1;i>=0;i--){
            int idx=i%n;
            while(!st.empty() && st.top()<=nums[idx]){
                st.pop();
            }
            //only change the first part not to the pretended copy
            if(i<n){
                if(!st.empty())ans[idx]=st.top();
            }
            st.push(nums[idx]);


        }
        return ans;
        
    }
};