class Solution {
  public:
    int countStrings(int n) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        
        dp[0][0]=1;
        dp[0][1]=1;
        
        dp[1][0]=1;
        dp[1][1]=1;
        
        
        for(int i=2;i<=n;i++){
            
            dp[i][0]=dp[i-1][0]+dp[i-1][1];//if  this char is 0 then last should be 0 OR 1
            dp[i][1]=dp[i-1][0]; // if  this char is 1 then last should be 0
            
        }
        
        
        return dp[n][0]+dp[n][1];
        
        
        
    }
};