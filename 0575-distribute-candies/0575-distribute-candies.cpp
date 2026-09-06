#include <algorithm>
using namespace std;
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_set<int>types;
        //storing frequencies of candy types
        for(int type:candyType){
            types.insert(type);
        }
        //maximum number of different types of candies
        return min(int(types.size()),n/2);
        
    }
};