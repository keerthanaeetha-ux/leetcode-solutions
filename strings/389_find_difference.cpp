#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0;
        int sum2=0;
        for(char i:s){
            sum1=sum1+int(i);
        }
        for(char j:t){
            sum2=sum2+int(j);
        }
        int addedchar=char(sum2-sum1);
        return addedchar;
        
    }
};