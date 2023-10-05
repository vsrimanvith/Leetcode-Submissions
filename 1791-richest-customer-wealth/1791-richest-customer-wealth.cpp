//Author: Sri Manvith Vaddeboyina

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth=INT_MIN;
        for(int i=0;i<accounts.size();i++)
        {
            int wealth = 0;
            for(int j=0;j<accounts[i].size();j++)
            {
                wealth+=accounts[i][j];
            }
            if(wealth>maxwealth) maxwealth=wealth;
        }
        return maxwealth;
    }
};