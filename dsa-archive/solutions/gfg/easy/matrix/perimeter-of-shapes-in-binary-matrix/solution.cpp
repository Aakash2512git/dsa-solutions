public:
  
    int count(vector<vector<int>> &mat,int n, int m,int i, int j){
          
          vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
          int cnt=0;
          for(int d=0;d<4;d++){
              
              int i_=i+dir[d][0];
              int j_=j+dir[d][1];
              
              if(i_<0 or j_<0 or i_>=n or j_>=m){
                  cnt++;
                  continue;
              }
              
              if(mat[i_][j_]==0) cnt++;
              
              
          }
          return cnt;
        
    }
  
    int findPerimeter(vector<vector<int>> &mat) {
        // code here
        
        int n=mat.size();
        int m=mat[0].size();
        
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(mat[i][j]==1){
                    cnt+=count(mat,n,m,i,j);
                }
                
            }
            
        }
        return cnt;
    }
};