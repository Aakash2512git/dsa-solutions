class Solution {
public:
    int find(vector<vector<int>>& dp, vector<int>& arr, int target, int sum, int i, int offset) {
        int n = arr.size();

        if (i == n) {
            return (sum == target) ? 1 : 0;
        }

        if (dp[i][sum + offset] != -1) {
            return dp[i][sum + offset];
        }

        int plus = find(dp, arr, target, sum + arr[i], i + 1, offset);
        int minus = find(dp, arr, target, sum - arr[i], i + 1, offset);

        return dp[i][sum + offset] = plus + minus;
    }

    int totalWays(vector<int>& arr, int target) {
        int n = arr.size();

        int totalSum = 0;
        for (int x : arr) {
            totalSum += x;
        }

        if (target > totalSum || target < -totalSum) {
            return 0;
        }

        vector<vector<int>> dp(n, vector<int>(2 * totalSum + 1, -1));

        return find(dp, arr, target, 0, 0, totalSum);
    }
};