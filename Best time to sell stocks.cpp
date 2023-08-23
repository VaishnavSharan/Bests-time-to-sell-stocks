
#include <iostream>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>ans;
        int n=prices.size();
        int maxi=INT_MIN;
        //for keeping the track of the minimum element 
        int min_val=prices[0];
        for(int i=0;i<n;i++)
        {
            //update the maxi
            maxi=max(maxi,prices[i]-min_val);
            min_val=min(min_val,prices[i]);
        }
        return maxi >= 0 ? maxi:0;
    }
    
};