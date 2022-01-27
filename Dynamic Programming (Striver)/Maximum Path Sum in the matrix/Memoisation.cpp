int func(int i,int j,int n,vector<vector<int>> &arr,vector<vector<int>>&dp){
    if(j<0 || j>=n) return -1e8;
    if(i==0){
        return arr[i][j];
    }
    if(dp[i][j]!=-1)
    return dp[i][j];
    
    int left=arr[i][j]+func(i-1,j-1,n,arr,dp);
    int mid=arr[i][j]+func(i-1,j,n,arr,dp);
    int right=arr[i][j]+func(i-1,j+1,n,arr,dp);
    return dp[i][j]=max(left,max(mid,right));
}
int getMaxPathSum(vector<vector<int>> &arr)
{
    //  Write your code here.
    int m=arr.size();
    int n=arr[0].size();
    int res=-1e8;
    for(int i=0;i<n;i++){
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        res=max(res,func(m-1,i,n,arr,dp));
    }
    return res;
}
