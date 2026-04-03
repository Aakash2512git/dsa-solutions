class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        
        int n=mat.size();
        
        int i=0;
        int j=0;
        vector<int>v;
        while(i<n and j<n){
            
            int i_=i;
            int j_=j;
            
            while(i_<n and j_>=0){
                
              v.push_back(mat[i_][j_]);
              i_++;
              j_--;
                
            }
            
            
            if(j==n-1){
                i++;
            }
            else
            {
                j++;
            }
            
            
        }
        return v;
    }
};