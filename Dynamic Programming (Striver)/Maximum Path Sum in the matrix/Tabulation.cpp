int getMaxPathSum(vector<vector<int>> &arr)
{
    //  Write your code here.
    int m=arr.size();
    int n=arr[0].size();
    vector<vector<int>>dp(m+1,vector<int>(n+1));
    for(int i=0;i<n;i++)
    dp[0][i]=arr[0][i];
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            int left=-1e8,mid=-1e8,right=-1e8;
            if(j-1>=0)
            left=dp[i-1][j-1]+arr[i][j];
            mid=dp[i-1][j]+arr[i][j];
            if(j+1<n)
            right=dp[i-1][j+1]+arr[i][j];
            dp[i][j]=max(left,max(right,mid));
        }
    }
    int res=-1e8;
    for(int i=0;i<n;i++){
        res=max(res,dp[m-1][i]);
    }
    return res;
}
