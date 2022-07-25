class Solution {
    long long func(int n,int m,int x,vector<vector<long long>>&dp){
        if(x<0) return 0;
        if(n==0 && x==0) return 1;
        if(n==0 && x!=0) return 0;
        if(n!=0 && x==0) return 0;
        if(dp[n][x]!=-1) return dp[n][x];
        long long  ans=0;
        for(int i=1;i<=m;i++){
            ans+=func(n-1,m,x-i,dp);
        }
        return dp[n][x]=ans;
    }
  public:
    long long noOfWays(int m , int n , int x) {
        // code here
        vector<vector<long long>>dp(n+1,vector<long long>(x+1,-1));
        return func(n,m,x,dp);
    }
};
