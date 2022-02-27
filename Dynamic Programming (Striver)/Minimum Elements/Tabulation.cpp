int minimumElements(vector<int> &arr, int x)
{
    // Write your code here.
    int n=arr.size();
    vector<vector<int>>dp(n+1,vector<int>(x+1,1e8));
    for(int i=1;i<=n;i++)
    dp[i][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
         int pick=INT_MAX;
         if(j-arr[i-1]>=0)
         pick=1+dp[i][j-arr[i-1]];
         int npick=dp[i-1][j];
         dp[i][j]=min(pick,npick);   
        }
    }
    int temp=dp[n][x];
    if(temp==1e8) return -1;
    return temp;
}
