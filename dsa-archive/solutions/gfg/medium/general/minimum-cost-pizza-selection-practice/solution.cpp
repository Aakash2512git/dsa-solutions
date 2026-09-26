class Solution {
  public:
  
    int dp[5001];
    
    int solve(int x, int s, int m, int l, int cs, int cm, int cl){
          
          if(x<=0) return 0;
          
          if(dp[x]!=-1) return dp[x];
          
          int small=cs+solve(x-s,s,m,l,cs,cm,cl);
          int med=cm+solve(x-m,s,m,l,cs,cm,cl);
          int large=cl+solve(x-l,s,m,l,cs,cm,cl);
          
          
        
        return dp[x]=min({small,med,large});
    }
    int minimumCost(int x, int s, int m, int l, int cs, int cm, int cl) {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(x,s,m,l,cs,cm,cl);
        
    }
};