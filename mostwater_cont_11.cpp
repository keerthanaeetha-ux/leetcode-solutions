#include<iostream>
using namespace std;
//Two pointer approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0;
        int rp=height.size()-1;
        int max_area=0;
        while(lp<rp){
            //not considering lp=rp case because area will be zero 
          int  h=min(height[lp],height[rp]);
           int w=rp-lp;
           int ans_area=h*w;
            max_area=max(max_area,ans_area);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }

        }
        return max_area;
    }
};