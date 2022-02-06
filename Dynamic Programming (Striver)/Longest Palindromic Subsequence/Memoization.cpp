// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    int func(int i,int j,string a, string b,vector<vector<int>>&dp){
        if(i==-1 || j==-1)
        return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(a[i]==b[j])
        return dp[i][j]=1+func(i-1,j-1,a,b,dp);
        return dp[i][j]=max(func(i-1,j,a,b,dp),func(i,j-1,a,b,dp));
    }
  public:
    int longestPalinSubseq(string a) {
        //code here
        string b=a;
        reverse(b.begin(),b.end());
        int n=a.length();
        int m=b.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return func(n-1,m-1,a,b,dp);
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
