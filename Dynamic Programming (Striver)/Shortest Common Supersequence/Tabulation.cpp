class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string a, string b, int m, int n)
    {
        //code here
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        //int lcs= func(m-1,n-1,a,b,dp);
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(a[i-1]==b[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int lcs=dp[m][n];
        return m+n-lcs;
    }
};
