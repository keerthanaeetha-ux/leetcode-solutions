class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int lastindex=digits.size()-1;
        while(lastindex>=0){
        if(digits[lastindex]<9){
        digits[lastindex]=digits[lastindex]+1;
        return digits;}
       else if(digits[lastindex]==9){
        digits[lastindex]=0;
        lastindex=lastindex-1;

        }}
        digits.insert(digits.begin(),1);
        return digits;
    }
};