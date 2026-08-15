#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    // Helper 1: Convert string to vector of <digit_char, count> pairs
    vector<pair<char, int>> string_to_pairs(string s) {
        vector<pair<char, int>> num_count_pair;
        int i = 0;
        
        while (i < s.length()) {
            int j = i;
            // Advance j as long as characters match s[i]
            while (j < s.length() && s[j] == s[i]) {
                j++;
            }
            // Push character and count of repeats
            num_count_pair.push_back({s[i], j - i});
            // Update i to the next new character
            i = j;
        }
        
        return num_count_pair;
    }

    // Helper 2: Convert pairs back into the formatted count string
    string vector_to_string(const vector<pair<char, int>>& num_count_pair) {
        string res = "";
        for (const auto& p : num_count_pair) {
            // Append count followed by digit character
            res += to_string(p.second) + p.first;
        }
        return res;
    }

    string countAndSay(int n) {
        if (n == 1) return "1";
        
        string res = "1";
        // Loop up to n (1-indexed iterations)
        for (int i = 2; i <= n; i++) {
            res = vector_to_string(string_to_pairs(res));
        }
        
        return res;
    }
};