#include <bits/stdc++.h>

using namespace std;
int frog(int n,int k, vector<int>&arr,vector<int>&dp){
    if(n==0) return 0;
    if(dp[n]!=-1)
    return dp[n];
    int energy=INT_MAX;
    for(int i=1;i<=k;i++){
        if(n-i>=0){
        int jump=frog(n-i,k,arr,dp)+abs(arr[n]-arr[n-i]);
        energy=min(energy,jump);    
        }
        
    }
    return dp[n]=energy;
}
int main()
{
   int n,k;
   cin>>n>>k;
   vector<int>arr;
   for(int i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
   }
   vector<int>dp(n,-1);
   cout<<frog(n-1,k,arr,dp);
    return 0;
}
