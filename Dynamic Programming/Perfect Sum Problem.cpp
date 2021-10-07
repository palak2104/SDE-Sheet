class Solution{

	public:
	int perfectSum(int arr[], int n, int target)
	{
        // Your code goes here
        long long mod=1e9+7;
        int dp[n+1][target+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=target;j++){
                if(i==0)
                dp[i][j]=0;
                if(j==0)
                dp[i][j]=1;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=target;j++){
                if(arr[i-1]<=j)
                dp[i][j]=dp[i-1][j-arr[i-1]]%mod+dp[i-1][j]%mod;
                else dp[i][j]=dp[i-1][j]%mod;
            }
        }
        return dp[n][target]%mod;
	}
	  
};
