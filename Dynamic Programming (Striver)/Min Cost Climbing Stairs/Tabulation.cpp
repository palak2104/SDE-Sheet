class Solution {
public:
    int minCostClimbingStairs(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n+1);
        dp[0]=arr[0];
        dp[1]=arr[1];
        for(int i=2;i<n;i++){
            dp[i]=min(dp[i-1],dp[i-2])+arr[i];
        }
        return min(dp[n-1],dp[n-2]);
    }
};
