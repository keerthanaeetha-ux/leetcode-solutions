#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        // Edge cases: single element or check boundaries immediately
        if (n == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];

        int low = 1, high = n - 2;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;

            // Found the single element
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // Logic: In a paired array, the first instance of a pair 
            // should be at an even index and the second at an odd index.
            if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) || 
                (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
                // We are in the left half, single element is to the right
                low = mid + 1;
            } else {
                // We are in the right half, single element is to the left
                high = mid - 1;
            }
        }
        
        return -1;
    }
};
