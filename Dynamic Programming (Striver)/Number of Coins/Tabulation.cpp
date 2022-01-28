class Solution{
    
	public:
	int minCoins(int coins[], int n, int sum) 
	{ 
	    // Your code goes here
	    vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	    for(int i=0;i<=sum;i++)
	    dp[0][i]=1e8;
	    for(int i=0;i<=n;i++)
	    dp[i][0]=0;
	    for(int i=1;i<=n;i++){
	    for(int j=1;j<=sum;j++){
	      if(j-coins[i-1]>=0)
	      dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
	      else dp[i][j]=dp[i-1][j];
	    }
	    }
	    int temp=dp[n][sum];
	    if(temp==1e8) return -1;
	    return temp;
	} 
	  
};
