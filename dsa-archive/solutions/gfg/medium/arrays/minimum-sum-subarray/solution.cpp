class Solution {
  public:
    int minSubarraySum(vector<int> &arr) {
        int sum = 0;
        int ans = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            ans = min(ans, sum);

            if (sum > 0) {
                sum = 0;
            }
        }

        return ans;
    }
};