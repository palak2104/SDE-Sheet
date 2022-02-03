class Solution{

	public:
	int minOperations(string a, string b) 
	{ 
	    // Your code goes here
	    int n=a.length();
        int m=b.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(a[i-1]==b[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int lcs=dp[n][m];
        int u=n-lcs;
        int v=m-lcs;
	    return u+v;
	} 
};
