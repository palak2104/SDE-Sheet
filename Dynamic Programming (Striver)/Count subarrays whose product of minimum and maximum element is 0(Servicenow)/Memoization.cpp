#include <bits/stdc++.h>

using namespace std;
int func(int i,vector<int>&arr,int mini,int maxi,vector<vector<vector<int>>>&dp){
    if(i==-1){
    if(maxi==0 || mini==0) return 1;
    return 0;
    }
    int mod=1e9+7;
    if(dp[i][mini+100][maxi+100]!=-1) return dp[i][mini+100][maxi+100];
    int left=func(i-1,arr,min(mini,arr[i]),max(maxi,arr[i]),dp);
    int right=func(i-1,arr,mini,maxi,dp);
    return dp[i][mini+100][maxi+100]=(left+right)%mod;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    int maxi=INT_MAX;
    int mini=INT_MIN;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    maxi=min(maxi,arr[i]);
    mini=max(mini,arr[i]);
    }
    vector <vector< vector<int>>>dp(n+1, vector < vector < int >> (1000+maxi, vector < int> (1000+mini, -1)));
    cout<<func(n-1,arr,mini,maxi,dp);
    return 0;
}
