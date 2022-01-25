int minimumPathSum(vector<vector<int>>& arr, int n){
	// Write your code here.
    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    dp[0][0]=arr[0][0];
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0)
            dp[i][j]=arr[i][j]+dp[i-1][j];
            else if(i==j)
            dp[i][j]=arr[i][j]+dp[i-1][j-1];
            else
            dp[i][j]=min(arr[i][j]+dp[i-1][j],arr[i][j]+dp[i-1][j-1]);
        }
    }
  int res=1e7;
  for(int i=0;i<n;i++){
      res=min(res,dp[n-1][i]);
  }
    return res;
}
