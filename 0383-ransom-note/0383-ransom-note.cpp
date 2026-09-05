class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //Time complexity O(m)
        //Space Complexity O(n)
        unordered_map<char,int>magazine_map;
        for(char ch:magazine){
            magazine_map[ch]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(magazine_map[ransomNote[i]]>0){
                magazine_map[ransomNote[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};