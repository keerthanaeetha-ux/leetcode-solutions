class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26];
        for(char ch:magazine){
            arr[ch-'a']++;
        }
        for(char c:ransomNote){
            if(arr[c-'a']>0){
                arr[c-'a']--;
            }
            else{
                return false;
            }
        }
        return true;

        
    }
};