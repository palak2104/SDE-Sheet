class Solution
{
    int func(int W, int wt[], int arr[], int n,int i,vector<vector<int>>&dp){
     if(i==0){
          if(W-wt[i]>=0)
         return arr[0];
         else return 0;
     }   
     if(dp[i][W]!=-1) return dp[i][W];
     int pick=INT_MIN;
     if(W-wt[i]>=0){
     pick=arr[i]+func(W-wt[i],wt,arr,n,i-1,dp);
     }
     int npick=func(W,wt,arr,n,i-1,dp);
     return dp[i][W]=max(pick,npick);
    }
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
       return func(W,wt,val,n,n-1,dp);
    }
};
