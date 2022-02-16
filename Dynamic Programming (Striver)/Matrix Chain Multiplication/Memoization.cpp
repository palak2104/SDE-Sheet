class Solution{
    int func(int arr[],int i,int j,vector<vector<int>>&dp){
        if (i == j)
        return 0;
        if(dp[i][j]!=-1) return dp[i][j];
    int mini = INT_MAX;
 
    for (int k = i; k < j; k++)
    {
        int temp = func(arr, i, k,dp)
                + func(arr, k + 1, j,dp)
                + arr[i - 1] * arr[k] * arr[j];
 
        mini=min(mini,temp);
    }
 
    return dp[i][j]=mini;
    }
public:
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return func(arr,1,n-1,dp);
    }
};
