class Solution {
    bool isSafe(int i,int j){
        if(i<0 || j<0)
        return false;
        return true;
    }
    int func(int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp){
        if(!isSafe(i,j))
        return 10000;
        if(i==0 && j==0)
        return grid[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        
        int up=grid[i][j]+func(i-1,j,grid,dp);
        int left=grid[i][j]+func(i,j-1,grid,dp);
        //cout<<up<<" "<<left<<endl;
        return dp[i][j]=min(up,left);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return func(m-1,n-1,grid,dp);
    }
};
