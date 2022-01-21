class Solution
{
    public:
    //Function to find out the number of ways to use the coins to
    //sum up to a certain required value.
     long long numberOfWays(int arr[],int m,int n)
    {
     vector<vector<long long>>dp(m+1,vector<long long>(n+1,-1));
     for(int i=0;i<m;i++)
     dp[i][0]=1;
     for(int i=0;i<m;i++){
     for(int j=1;j<=n;j++){
        int right=0,left=0;
        if(j-arr[i]>=0)
        left=dp[i][j-arr[i]];
        if(i-1>=0)
        right=dp[i-1][j];
         dp[i][j]=right+left;
     }
        
    }
    return dp[m-1][n];
    }
};
