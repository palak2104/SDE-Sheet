#include <bits/stdc++.h>

using namespace std;
int countSubset(vector<int>&arr,int diff){
    int sum=0;
    for(auto it:arr)
    sum+=it;
    int n=arr.size();
    int target=(sum+diff)/2;
    int dp[n+1][target+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=target;j++){
            if(i==0)
            dp[i][j]=0;
            if(j==0)
            dp[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=target;j++){
            if(arr[i-1]<=j)
            dp[i][j]=dp[i-1][j-arr[i-1]]+dp[i-1][j];
            else dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][target];
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int diff;
    cin>>diff;
    cout<<countSubset(arr,diff);
    return 0;
}
