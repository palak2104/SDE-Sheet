class Solution{
    int func(int i,int *arr,int n,vector<int>&dp){
        if(i==0) return arr[i];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int a=arr[i]+func(i-2,arr,n,dp);
        int b=func(i-1,arr,n,dp);
        return dp[i]=max(a,b);
    }
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code herez
	    vector<int>dp(n+1,-1);
	    return func(n-1,arr,n,dp);
	}
};
