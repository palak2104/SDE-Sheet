class Solution{
bool isPalindrome(int i,int j,string str){
    while(i<j){
        if(str[i]!=str[j])
        return false;
        i++; j--;
    }
    return true;
}
    int func(int i,int j,string str,vector<vector<int>>&dp){
        if(i>=j) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(isPalindrome(i,j,str)) return dp[i][j]=0;
        
        int mini=INT_MAX;
        for(int k=i;k<j;k++){
            int count=1;
            if(dp[i][k]!=-1)
            count+=dp[i][k];
            else count+=func(i,k,str,dp);
            if(dp[k+1][j]!=-1)
            count+=dp[k+1][j];
            else count+=func(k+1,j,str,dp);
            mini=min(mini,count);
        }
        return dp[i][j]=mini;
    }
public:
    int palindromicPartition(string str)
    {
        // code here
        int n=str.length();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return func(0,n-1,str,dp);
    }
};
