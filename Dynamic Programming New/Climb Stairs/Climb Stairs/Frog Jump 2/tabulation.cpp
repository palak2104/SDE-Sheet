#include <bits/stdc++.h>

using namespace std;
int frog(int n,int k,vector<int>&arr){
    vector<int>dp(n,-1);
    dp[0]=0;
    for(int i=1;i<n;i++){
        int energy=INT_MAX;
        for(int j=1;j<=k;j++){
        if(i-j>=0){
        int jump=dp[i-j]+abs(arr[i]-arr[i-j]);
        energy=min(energy,jump);
        }
        }
        dp[i]=energy;
    }
    return dp[n-1];
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
   cout<<frog(n,k,arr);

    return 0;
}
