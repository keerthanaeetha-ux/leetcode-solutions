class Solution {
public:
    int addDigits(int n) {
        if(n==0)return 0;
        int rem=n%9;
        if(rem==0)return 9;
        else return rem;
        
    }
};