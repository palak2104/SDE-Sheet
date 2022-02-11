#include <bits/stdc++.h>

using namespace std;
int func(int ind,vector<int>&arr,int prod,int k,vector<vector<int>>&dp){
    if(ind==-1){
    return prod<k;
    }
    if(dp[ind][prod]!=-1) return dp[ind][prod];
    int left=func(ind-1,arr,prod*arr[ind],k,dp);
    int right=func(ind-1,arr,prod,k,dp);
    return dp[ind][prod]=left+right;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    int res=func(n-1,arr,1,k,dp);
    if(k>1)
    cout<<res-1;
    else cout<<res;
    return 0;
}
