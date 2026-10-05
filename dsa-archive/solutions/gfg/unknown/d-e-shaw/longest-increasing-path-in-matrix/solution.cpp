// User function Template for C++

class Solution {
  public:
   int find(int i,int j, vector<vector<int>>& grid,vector<vector<int>>& vis,int val){
        
        int n= grid.size();
        int m=grid[0].size();
        
        if(i<0 or j<0 or i>=n or j>=m) return 0;
         
         if(val>=grid[i][j]) return 0;
         
         if(vis[i][j]) return vis[i][j];
         
         
         int ans=1;
         
         int up=find(i+1,j,grid,vis,grid[i][j]);
         
         int down=find(i-1,j,grid,vis,grid[i][j]);
         
         int right=find(i,j+1,grid,vis,grid[i][j]);
         
         int left=find(i,j-1,grid,vis,grid[i][j]);
         
         
         ans=1+max({up,down,right,left});
         
         
         return vis[i][j]=ans;
         
         
         
        
    
    
    
        
   }
        
  
  
    int longIncPath(vector<vector<int>> &grid, int n, int m) {
        // Code here
        vector<vector<int>>vis(n,vector<int>(m,0));
        int mx=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ans=0;
               if(vis[i][j]==0){
                   
                   ans=find(i,j,grid,vis,-1);
               }
                mx=max(ans,mx);
            }
            
        }
        
        return mx;
        
    }
};