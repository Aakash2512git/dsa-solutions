class Solution {
  public:
    int findKthSmall(vector<int>& arr, int k) {
        // code here
        
        sort(arr.begin(),arr.end());
        
        int missing =0;
        
        int n=arr.size();
        int last_one=0;
        
        for (int i=0;i<n;i++){
            
            int mis=missing;
            missing+=arr[i]-last_one-1;
            
            if(missing>=k){
                
               return last_one+(k-mis);
                
            }
            last_one=arr[i];
            
            
            
            
        }
        
        
        return last_one+(k-missing);
        
        
        
    }
};