class Solution {
  public:
    int countStrings(int n) {
        // code here
       int pre1=1;
        int pre0=1;
        
        
        
        for(int i=2;i<=n;i++){
            
            int this0=pre0+pre1;//if  this char is 0 then last should be 0 OR 1
            int this1=pre0; // if  this char is 1 then last should be 0
            
            pre1=this1;
            pre0=this0;
        }
        
        
        return pre1+pre0;
        
        
        
    }
};