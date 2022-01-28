class Solution{
    int func(int i,int sum,int coins[],vector<vector<int>>&dp){
        if(i==-1){
            if(sum==0) return 0;
            return 1e8;
        }
        if(dp[i][sum]!=-1) return dp[i][sum];
        int pick=1e8;
        if(sum-coins[i]>=0)
        pick=1+func(i,sum-coins[i],coins,dp);
        int npick=func(i-1,sum,coins,dp);
        return dp[i][sum]=min(pick,npick);
    }
	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>>dp(M+1,vector<int>(V+1,-1));
	    int temp=func(M-1,V,coins,dp);
	    if(temp==1e8) return -1;
	    return temp;
	} 
	  
};
