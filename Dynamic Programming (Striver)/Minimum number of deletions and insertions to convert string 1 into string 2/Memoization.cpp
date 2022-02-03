class Solution{
	int func(int i,int j,string a, string b,vector<vector<int>>&dp){
        if(i==-1 || j==-1)
        return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j])
        return dp[i][j]=1+func(i-1,j-1,a,b,dp);
        return dp[i][j]=max(func(i-1,j,a,b,dp),func(i,j-1,a,b,dp));
    }

	public:
	int minOperations(string a, string b) 
	{ 
	    // Your code goes here
	    int n=a.length();
	    int m=b.length();
	    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int lcs=func(n-1,m-1,a,b,dp);
        int u=n-lcs;
        int v=m-lcs;
	    return u+v;
	} 
};
