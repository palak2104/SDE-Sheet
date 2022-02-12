class Solution {
    string func(int i,int j,string a,string b,vector<vector<string>>&dp){
    if(i==-1 || j==-1)
    return "";
    if(dp[i][j]!="-1")
    return dp[i][j];
    if(a[i]==b[j]){
    string str="";
    str+=a[i];
    str+=func(i-1,j-1,a,b,dp);
    return dp[i][j]=str;
    }
    string u=func(i-1,j,a,b,dp);
    string v=func(i,j-1,a,b,dp);
    if(u.length()>=v.length())
    return dp[i][j]=u;
    return dp[i][j]=v;
}
public:
    bool isSubsequence(string a, string b) {
      vector<vector<string>>dp(a.length()+1,vector<string>(b.length()+1,"-1"));
    string str=func(a.length()-1,b.length()-1,a,b,dp);
    reverse(str.begin(),str.end());
        return(a==str);
    }
};
