class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        int arr[26];
        for(char ch:string("qwertyuiop")){
            arr[ch-'a']=1;
        }
        for(char ch:string("asdfghjkl")){
            arr[ch-'a']=2;
        }
        for(char ch:string("zxcvbnm")){
            arr[ch-'a']=3;
        }
        for(string word:words){
            if(word.empty())continue;
            bool allmatch=true;
            for(int i=0;i<word.length();i++){
                int key=arr[tolower(word[0])-'a'];
                if(key!=arr[tolower(word[i])-'a']){
                    allmatch=false;
                    break;}
            }
            if(allmatch)ans.push_back(word);
        }
        return ans;
        
    }
};