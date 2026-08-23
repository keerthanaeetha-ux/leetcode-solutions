class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int l = 0;
        int r = nums.size() - 1;

        while (l < r) {
            if (nums[l] + nums[r] == target) {
                ans.push_back(l + 1);//for 1 based indexing
                ans.push_back(r + 1);
                return ans;
            } else if (nums[l] + nums[r] < target) {
                l++;
            } else {
                r--;
            }
        }

        return {};//to get rid of compiler return path check
    }
};