class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>>dp(prices.size()+1,vector<int>(2,0));
        for(int i=prices.size()-1;i>=0;i--){
            dp[i][0] = max(dp[i+1][1]-prices[i]-fee,dp[i+1][0]);
            dp[i][1] = max(dp[i+1][0]+prices[i],dp[i+1][1]);
        }
        return dp[0][0];
    }
};