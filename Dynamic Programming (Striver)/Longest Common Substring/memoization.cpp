class Solution{
    public:
    int func(int i,int j,string a, string b,vector<vector<int>>&dp,int &maxi){
        if(i==0 || j==0)
        return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i-1]==b[j-1]){
        dp[i][j]=1+func(i-1,j-1,a,b,dp,maxi);
        }
        else
        dp[i][j]=0;
        func(i-1,j,a,b,dp,maxi);
        func(i,j-1,a,b,dp,maxi);
        maxi=max(maxi,dp[i][j]);
        return dp[i][j];
    }
    int longestCommonSubstr (string a, string b, int n, int m)
    {
        // your code here
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int maxi=INT_MIN;
        func(n,m,a,b,dp,maxi);
        return maxi;
    }
};
