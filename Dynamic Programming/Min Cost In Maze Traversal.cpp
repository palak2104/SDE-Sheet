#include <bits/stdc++.h>

using namespace std;
int arr[100][100];

int cost(int n,int m){
    int dp[n+1][m+1];
    dp[n][m]=arr[n][m];
    for(int i=n;i>0;i--){
      for(int j=m;j>0;j--){
        if(i==n && j==m) continue;
        int a=INT_MAX;
        int b=INT_MAX;
        if(i+1<=n) a=dp[i+1][j]+arr[i][j];
        if(j+1<=m) b=dp[i][j+1]+arr[i][j];
        dp[i][j]=min(a,b);
    }  
    }
    
   /*for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
          cout<<dp[i][j]<<" ";
       }
       cout<<endl;
   }*/
    return dp[1][1];
}
int main()
{
   int n,m;
   cin>>n>>m;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
           cin>>arr[i][j];
       }
   }
   cout<<cost(n,m);
    return 0;
}
