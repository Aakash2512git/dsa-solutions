class Solution {
  public:
    int minToggle(vector<int>& arr) {
        // code here
    int n=arr.size();
    
    vector<int>z(n,0);
    vector<int>o(n,0);
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
         int j=n-1-i;
         if(arr[i]==0){
             cnt0++;
         }
         
         if(arr[j]==1){
             cnt1++;
         }
         
         z[i]=cnt0;
         o[j]=cnt1;
        
        
    }
    
    if(cnt0==0 or cnt1==0) return 0; 
    int ans=n;
    
    for(int i=0;i<n;i++){
        
        int tmp= abs(i-z[i]);
        int tmp1= abs((n-i)-o[i]);
        
        
        ans=min(ans,tmp+tmp1);
    }
        
        return ans;
    }
};