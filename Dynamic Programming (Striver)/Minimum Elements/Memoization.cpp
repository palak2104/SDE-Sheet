int func(int i,int x,vector<int> &arr,vector<vector<int>>&dp){
    if(x==0) return 0;
    if(i==0) return 1e8;
    if(dp[i][x]!=-1) return dp[i][x];
    int pick=INT_MAX;
    if(x-arr[i-1]>=0)
    pick=1+func(i,x-arr[i-1],arr,dp);
    int npick=func(i-1,x,arr,dp);
    return dp[i][x]=min(pick,npick);
}
int minimumElements(vector<int> &arr, int x)
{
    // Write your code here.
    int n=arr.size();
    vector<vector<int>>dp(n+1,vector<int>(x+1,-1));
    int temp= func(n,x,arr,dp);
    if(temp==1e8) return -1;
    return temp;
}
