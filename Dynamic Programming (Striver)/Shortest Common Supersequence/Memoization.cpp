class Solution
{
    int func(int i,int j,string a, string b,vector<vector<int>>&dp){
        if(i==-1 || j==-1)
        return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j])
        return dp[i][j]=1+func(i-1,j-1,a,b,dp);
        return dp[i][j]=max(func(i-1,j,a,b,dp),func(i,j-1,a,b,dp));
    }
    public:
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string a, string b, int m, int n)
    {
        //code here
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        int lcs= func(m-1,n-1,a,b,dp);
        return m+n-lcs;
    }
};
