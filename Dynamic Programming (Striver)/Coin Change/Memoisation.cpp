class Solution {
    long long func(int i,int n,int arr[],vector<vector<long long>>&dp){
        if(n==0)
        return 1;
        if(i==-1)
        return 0;
        if(dp[i][n]!=-1)
        return dp[i][n];
        long long left=0;
        long long right=0;
        long long mod=1e9+7;
        if(n-arr[i]>=0){
            left=func(i,n-arr[i],arr,dp);
        }
        right=func(i-1,n,arr,dp);
        return dp[i][n]=right+left;
    }
  public:
    long long int count(int arr[], int m, int n) {

        // code here.
        vector<vector<long long>>dp(m+1,vector<long long>(n+1,-1));
        return func(m-1,n,arr,dp);
    }
};
