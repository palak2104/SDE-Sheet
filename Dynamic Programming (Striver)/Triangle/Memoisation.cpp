int func(vector<vector<int>>&arr, int n,int i,int j,vector<vector<int>>&dp){
    if(i==n)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int left=arr[i][j]+func(arr,n,i+1,j,dp);
    int right=arr[i][j]+func(arr,n,i+1,j+1,dp);
    return dp[i][j]=min(left,right);
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    return func(triangle,n,0,0,dp);
    
}
