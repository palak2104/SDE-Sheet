int func(int i,int j,string a, string b,vector<vector<int>>&dp){
        if(i==-1 || j==-1)
        return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j])
        return dp[i][j]=1+func(i-1,j-1,a,b,dp);
        return dp[i][j]=max(func(i-1,j,a,b,dp),func(i,j-1,a,b,dp));
    }
int minDeletions(string a, int n) { 
    //complete the function here 
        string b=a;
        reverse(b.begin(),b.end());
        int m=n;
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return n-func(n-1,m-1,a,b,dp);
} 
