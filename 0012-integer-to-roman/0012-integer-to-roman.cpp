class Solution {
public:
    string intToRoman(int num) {
        //ATM cash machine simulator
        //p1
        string ans="";
        vector<pair<int,string>>drawer={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
        for(int i=0;i<drawer.size();i++){
            while(num>=drawer[i].first){
                ans+=drawer[i].second;
                num=num-drawer[i].first;
            }
        }

        return ans;
        
    }
};