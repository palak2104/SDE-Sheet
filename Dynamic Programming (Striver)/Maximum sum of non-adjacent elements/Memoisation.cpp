int func(int i,vector<int> &arr,vector<int>&dp){
    if(i==0) return arr[i];
    if(i<0) return 0;
    if(dp[i]!=-1) return dp[i];
    int pick=arr[i]+func(i-2,arr,dp);
    int npick=func(i-1,arr,dp);
    return dp[i]=max(pick,npick);
}
int maximumNonAdjacentSum(vector<int> &arr){
    // Write your code here.
    vector<int>dp(arr.size(),-1);
    return func(arr.size()-1,arr,dp);
}
