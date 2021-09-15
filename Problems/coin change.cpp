class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // sort(coins.begin(),coins.end());
        int n=coins.size();
        int dp[amount+1];
        dp[0]=0;
        for(int i=1;i<=amount;i++){
            dp[i]=amount+1;
            for(auto coin:coins){
                if(coin<=i){
                    dp[i]=min(dp[i],1+dp[i-coin]);
                }
            }
        }
        return dp[amount]>amount?-1:dp[amount];
    }
};