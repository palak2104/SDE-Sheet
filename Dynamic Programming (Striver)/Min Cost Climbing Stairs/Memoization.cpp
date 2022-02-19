#include <bits/stdc++.h>

using namespace std;
class Solution {
    int func(int i,vector<int>&arr,int n,vector<int>&dp){
        
        if(i>=n)
        return 0;
        if(dp[i+1]!=-1) return dp[i+1];
        int a=arr[i+1]+func(i+1,arr,n,dp);
        int b=arr[i+2]+func(i+2,arr,n,dp);
        return dp[i+1]=min(a,b);
    }
public:
    int minCostClimbingStairs(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp(n+1,-1);
        return func(-1,arr,n,dp);
    }
};
int main()
{
    Solution ob;
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<ob.minCostClimbingStairs(arr);

    return 0;
}
