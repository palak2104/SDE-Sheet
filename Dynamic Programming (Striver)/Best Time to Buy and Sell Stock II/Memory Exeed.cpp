class Solution {
    int func(int i,int maxi,vector<int>& arr,vector<vector<int>>&dp){
        if(i==0) return 0;
        if(dp[i][maxi]!=-1) return dp[i][maxi];
        if(arr[i-1]>=maxi){
            return dp[i][maxi]=func(i-1,arr[i-1],arr,dp);
        }
        else{
            int pick=(maxi-arr[i-1])+func(i-1,0,arr,dp);
            int npick=func(i-1,maxi,arr,dp);
            return dp[i][maxi]=max(pick,npick);
        }
    }
public:
    int maxProfit(vector<int>& arr) {
        int m=INT_MIN;
        for(auto it:arr){
            m=max(m,it);
        }
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int maxi=0;
        return func(n,maxi,arr,dp);
    }
};
