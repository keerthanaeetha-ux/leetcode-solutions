class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string ans="";
        while(i>=0 || j>=0){
            int bit1=(i>=0)?a[i]-'0':0;
            int bit2=(j>=0)?b[j]-'0':0;
            int x=bit1^bit2;
            int s=x^carry;
            carry=(bit1 & bit2)|(carry & x);
            ans+=(s+'0');
            i--;
            j--;
        }
            if(carry){ans+='1';}
            
            reverse(ans.begin(),ans.end());
            return ans;


        
        
    }
};