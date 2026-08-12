class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long MOD = 1e9 + 7;
        
        // left[i] stores distance to the Previous Smaller Element
        // right[i] stores distance to the Next Smaller Element
        vector<int> left(n), right(n);
        stack<pair<int, int>> st1, st2; // pair of {element, count}
        
        // 1. Calculate distance to Previous Smaller Element (strict <)
        for (int i = 0; i < n; i++) {
            int count = 1;
            while (!st1.empty() && st1.top().first > arr[i]) {
                count += st1.top().second;
                st1.pop();
            }
            st1.push({arr[i], count});
            left[i] = count;
        }
        
        // 2. Calculate distance to Next Smaller Element (use <= to avoid duplicate subarray counting)
        for (int i = n - 1; i >= 0; i--) {
            int count = 1;
            while (!st2.empty() && st2.top().first >= arr[i]) {
                count += st2.top().second;
                st2.pop();
            }
            st2.push({arr[i], count});
            right[i] = count;
        }
        
        // 3. Compute the sum of contributions
        long long totalSum = 0;
        for (int i = 0; i < n; i++) {
            long long totalSubarrays = (long long)left[i] * right[i];
            long long contribution = (totalSubarrays % MOD * arr[i]) % MOD;
            totalSum = (totalSum + contribution) % MOD;
        }
        
        return totalSum;
    }
};