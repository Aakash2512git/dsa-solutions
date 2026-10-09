class Solution {
  public:
    int minOperation(int n) {
        // code here
        
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        
        for(int i=3;i<=n;i++){
            
            int val=i/2;
            int val1=i%2;
            
            dp[i]=1+dp[val]+dp[val1];
            
        }
        
        return dp[n];
        
    }
};