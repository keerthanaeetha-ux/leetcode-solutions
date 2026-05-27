#include<iostream>
using namespace std;
class Solution {
    //Time Complexity :O(log n)
public:
    int reverse(int x) {
        
        long reversed = 0;
        while (x != 0) {
            // Extract the last digit and append it to 'reversed'
            reversed = reversed * 10 + (x % 10);
            // Move to the next digit
            x /= 10;
        }
        
        // Check if the result is within the 32-bit signed integer range
        if (reversed < INT_MIN || reversed > INT_MAX) {
            return 0;
        }
        
        return (int)reversed;
        
    }
};