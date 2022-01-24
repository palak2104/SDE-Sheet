class Solution{
    int func(int i,int sum,int arr[],vector<vector<int>>&dp){
    if(i==-1){
    if(sum==0) return 1;
    return 0;
    }
    if(dp[i][sum]!=-1)
    return dp[i][sum];
    long long mod =1e9+7;
    int left=0,right=0;
    if(sum-arr[i]>=0)
    left=func(i-1,sum-arr[i],arr,dp);
    right=func(i-1,sum,arr,dp);
    return dp[i][sum]=(left+right)%mod;
   }
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        long long mod =1e9+7;
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return func(n-1,sum,arr,dp)%mod;
	}
	  
};
