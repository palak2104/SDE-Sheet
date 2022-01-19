int mazeObstacles(int m, int n, vector< vector< int> > &mat) {
    // Write your code here
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));
    if(mat[0][0]==1) return 0;
    long long int mod = 1e9 + 7;
    dp[1][1]=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 && j==1) continue;
            if(mat[i-1][j-1]==-1){dp[i][j]=0;continue;}
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;

        }
    }
    return dp[m][n];
}
