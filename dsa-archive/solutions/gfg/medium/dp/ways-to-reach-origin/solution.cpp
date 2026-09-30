class Solution {
  public:
    int mod=1000000007;
    int dp[501][501];
    
    int way(int x,int y){
        
         if(x==0 and y==0) return 1;
        
        if(dp[x][y]!=-1) return dp[x][y];
        int count=0;
        
        if(x>0)
          count=way(x-1,y);
          
        if(y>0)      
          count+=way(x,y-1);
        
        return dp[x][y]=count%mod ;
        
        
    }
  
    int ways(int x, int y) {
        // code here
        memset(dp,-1,sizeof(dp));
        
        return way(x,y);
       
        
    }
};