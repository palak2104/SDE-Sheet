#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.length();
    int m=b.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string str;
    int i=n;
    int j=m;
    while(i>0 && j>0){
      if(a[i-1]==b[j-1]){
          str.push_back(a[i-1]);
          i--;
          j--;
      }  
      else{
          if(dp[i-1][j]>dp[i][j-1]){
            str.push_back(a[i-1]);
            i--;
          }
          else{
           str.push_back(b[j-1]);
           j--;   
          }
      }
    }
    while(i>0){
    str.push_back(a[i-1]);
    i--;    
    }
    while(j>0){
    str.push_back(b[j-1]);
    j--;    
    }
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}
