class Solution {
  public:
    int countWays(int n, int k) {
        // if (n == 1) return k;

        // vector<vector<long long>> dp(n + 1, vector<long long>(2, 0));

        // // dp[i][0] = same
        // // dp[i][1] = diff

        // dp[2][0] = k;
        // dp[2][1] = 1LL * k * (k - 1);

        // for (int i = 3; i <= n; i++) {
        //     dp[i][0] = dp[i - 1][1];
        //     dp[i][1] = (dp[i - 1][0] + dp[i - 1][1]) * (k - 1);
        // }

        // return dp[n][0] + dp[n][1];
        
        
        if (n == 1) return k;
        long long same=k;
        long long diff=1LL*k*(k-1);
        
        for(int i=3;i<=n;i++){
            
            long long temp_same=diff;
            long long temp_diff= (k-1)*(same+diff);
            
            same=temp_same;
            diff=temp_diff;
        }
        
        
        return same+diff;
        
        
        
    }
};