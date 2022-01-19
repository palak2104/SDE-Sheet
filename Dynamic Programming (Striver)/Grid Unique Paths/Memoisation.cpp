bool isSafe(int i,int j,int m,int n){
    if(i>=m || j>=n)
    return false;
    return true;
}
int func(int i,int j,int m,int n,vector<vector<int>>&dp){
    if(!isSafe(i,j,m,n))
    return 0;
    if(i==m-1 && j==n-1){
        return 1;
    }
    if(dp[i][j]!=-1)
    return dp[i][j];
    int down=func(i+1,j,m,n,dp);
    int right=func(i,j+1,m,n,dp);
    return dp[i][j]=down+right;
}
int uniquePaths(int m, int n) {
	// Write your code here.
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
    return func(0,0,m,n,dp);
}
