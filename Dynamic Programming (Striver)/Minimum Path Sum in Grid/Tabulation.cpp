class Solution {
public:
    int minPathSum(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,10000));
        dp[1][1]=arr[0][0];
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){

            if(i==1 && j==1) continue;
            int up=arr[i-1][j-1]+dp[i-1][j];
            int left=arr[i-1][j-1]+dp[i][j-1];
            dp[i][j]=min(up,left);

        }
    }

    return dp[m][n];
    }
};
