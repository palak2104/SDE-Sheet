class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        int n=a.length();
        int m=b.length();
        //vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        vector<int>temp(m+1,0);
        for(int i=1;i<=n;i++){
            vector<int>temp2(m+1,0);
            for(int j=1;j<=m;j++){
                if(a[i-1]==b[j-1])
                temp2[j]=1+temp[j-1];
                else temp2[j]=max(temp[j],temp2[j-1]);
            }
            temp=temp2;
        }
        return temp[m];
    }
};
