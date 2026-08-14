class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> chs;
        int max_len = 0;
        int left = 0;

        for (int right = 0; right < s.length(); right++) {
            // Shrink window from the left until s[right] is no longer a duplicate
            while (chs.count(s[right])) {
                chs.erase(s[left]);
                left++;
            }
            
            // Add current character to window
            chs.insert(s[right]);
            
            // Update maximum length found
            max_len = max(max_len, right - left + 1);
        }

        return max_len;
    }
};