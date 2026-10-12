class Solution {
  public:
    int minSquares(int n, int m) {
        // code here
         int cnt=0;
        while(n!=0 and m!=0){
            
            int mn=min(n,m);
            int mx=max(n,m);
            
            cnt+=mx/mn;
            int val=mx%mn;
            
            n=val;
            m=mn;
            
            
            
            
        }
        
        return cnt;
    }
};