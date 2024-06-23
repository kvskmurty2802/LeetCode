class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        
        if(k >= n/2){
            for(int i = 1; i < n; i++){
                ans += max(0, prices[i]-prices[i-1]);
            }
            return ans;
        }
        
        vector<vector<int>> dp(k+1, vector<int>(n, 0));
        for(int i = 1; i <= k; i++){ 
            int hold = dp[i-1][0] - prices[0];
            for(int j = 1; j < n; j++){ 
                dp[i][j] = max(dp[i][j-1], prices[j] + hold);
                hold = max(hold, dp[i-1][j] - prices[j]);
            }
        }
        
        return dp[k][n-1];
    }
};
