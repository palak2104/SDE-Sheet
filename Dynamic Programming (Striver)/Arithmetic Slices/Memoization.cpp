class Solution {
    int func(int i,vector<int>&arr,vector<int>&dp){
        if(i<=1) return 0;
        if(dp[i]!=-1) return dp[i];
        if(arr[i]-arr[i-1]==arr[i-1]-arr[i-2])
        dp[i]=1+func(i-1,arr,dp);
        else{
            dp[i]=0;
            func(i-1,arr,dp);
        }
        return dp[i];
    }
public:
    int numberOfArithmeticSlices(vector<int>&arr) {
     int n=arr.size();
     vector<int>dp(n,-1);
     func(n-1,arr,dp);
     int sum=0;
     for(auto it:dp) if(it!=-1) sum+=it;
    return sum;
    }
};
