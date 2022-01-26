class Solution {
public:

    int get(vector<int>& nums,int i,int S,int sum,vector<vector<int>>&dp)
    {
        if(i==nums.size()){
            if(sum==S) return 1;
            return 0;
        }

        if(dp[i][1000+sum]!=-1)
            return dp[i][1000+sum];
        int p1=get(nums,i+1,S,sum+nums[i],dp);
        int p2=get(nums,i+1,S,sum-nums[i],dp);
        return dp[i][1000+sum]=p1+p2;
    }
    int findTargetSumWays(vector<int>& nums, int S) 
    {
        vector<vector<int>>dp(nums.size(),vector<int>(2001,-1));
        return get(nums,0,S,0,dp);
    }
};
