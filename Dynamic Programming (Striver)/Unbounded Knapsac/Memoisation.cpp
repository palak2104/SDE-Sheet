class Solution{
    int func(int i, int W, int val[], int wt[],vector<vector<int>>&dp){
        if(i==0){
            if(W-wt[i]>=0)
            return val[i];
            return 0;
        }
        if(dp[i][W]!=-1) return dp[i][W];
        int pick=INT_MIN;
        if(W-wt[i]>=0)
        pick=val[i]+func(i,W-wt[i],val,wt,dp);
        int npick=func(i-1,W,val,wt,dp);
        return dp[i][W]=max(pick,npick);
    }
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N+1,vector<int>(W+1,-1));
        return func(N-1,W,val,wt,dp);
        
    }
};
