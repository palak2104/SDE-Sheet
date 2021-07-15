#include <bits/stdc++.h>

using namespace std;
int moves(int arr[],int n){
    int dp[n+1];
    for(int i=0;i<=n;i++){
        dp[i]=INT_MAX;
    }
    dp[n]=0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]==0){ dp[i]=INT_MAX; continue;}
        for(int j=1;j<=arr[i];j++){
            if(i+j<=n){
                dp[i]=min(dp[i],dp[i+j]);
            }
        }
        
        dp[i]+=1;
        if(dp[i]<0) dp[i]=INT_MAX;
        //cout<<dp[i]<<" ";
    }
    return dp[0];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<moves(arr,n);

    return 0;
}
