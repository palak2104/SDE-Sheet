class Solution {
    int func(int i,int end,vector<int>&arr,vector<vector<int>>&dp,int x){
        if(x==0 || i<=end) return 0;
        if(dp[i][x]!=-1) return dp[i][x];
        return dp[i][x]=max(arr[i-1]+func(i-2,end,arr,dp,x-1),func(i-1,end,arr,dp,x));
    }
public:
    int maxSizeSlices(vector<int>&arr) {
        int n=arr.size();
        int x=n/3;
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        int a=func(n,1,arr,dp,n/3);
        vector<vector<int>>vp(n+1,vector<int>(n+1,-1));
        int b=func(n-1,0,arr,vp,n/3);
        return max(a,b);
    }
};
