#include <bits/stdc++.h>

using namespace std;

unordered_set<string> uset;
bool findSubStr(string str,int i,vector<int>&dp){
    if(i==str.length())
    return true;
    //if(dp[i]!=-1) return dp[i];
    //int mini=1e8;
    bool res=false;
    for(int len=1;len<=str.length()-i;len++){
        string s=str.substr(i,len);
        if(uset.find(s)!=uset.end()){
            res=res || findSubStr(str,i+len,dp);
        }
    }
    
    return res;
}
int main()
{
    string str;
    cin>>str;
    int n;
    cin>>n;
    string arr[n+1];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for (int i = 0; i < n; i++)
    uset.insert(arr[i]);
    vector<int>dp(str.length(),-1);
    int temp=findSubStr(str,0,dp);
    if(temp) cout<<true;
    else cout<<false;
    return 0;
}
