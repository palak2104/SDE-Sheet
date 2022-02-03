#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    vector<vector<string>>dp(a.length()+1,vector<string>(b.length()+1,"-1"));
    int x=a.length();
    int y=b.length();
    for(int i=0;i<x;i++){
        dp[0][i]="";
    }
    for(int i=0;i<y;i++){
        dp[i][0]="";
    }
    for(int i=1;i<=x;i++){
    for(int j=1;j<=y;j++){
        if(a[i-1]==b[j-1])
        dp[i][j]=a[i-1]+dp[i-1][j-1];
        else{
            string u=dp[i-1][j];
            string v=dp[i][j-1];
            if(u.length()>=v.length())
            dp[i][j]=u;
            else dp[i][j]=v;
        }
    }
    }
    string str=dp[x][y];
    reverse(str.begin(),str.end());
    cout<<str;
    return 0;
}
