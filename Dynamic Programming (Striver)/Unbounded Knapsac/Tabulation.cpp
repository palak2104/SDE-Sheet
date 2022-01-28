public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N+1,vector<int>(W+1,-1));
        for(int i=0;i<=N;i++)
        dp[i][0]=0;
        for(int i=0;i<=W;i++)
        dp[0][i]=0;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=W;j++){
                if(j-wt[i-1]>=0)
                dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        return dp[N][W];
    }
};
