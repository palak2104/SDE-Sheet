class Solution{
    int func(string a,string b,int i,int j,vector<vector<int>>&dp){
        if(i==-1 || j==-1)
        return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j])
        dp[i][j]=1+func(a,b,i-1,j-1,dp);
        else{
            dp[i][j]=max(func(a,b,i-1,j,dp),func(a,b,i,j-1,dp));
        }
        return dp[i][j];
    }
  public:
    int countMin(string str){
    //complete the function here
    string a=str;
    string b=str;
    reverse(b.begin(),b.end());
    int n=a.length();
    vector<vector<int>>dp(n+1,vector<int>(n,-1));
    int lps=func(a,b,n-1,n-1,dp);
    return n-lps;
    }
};
