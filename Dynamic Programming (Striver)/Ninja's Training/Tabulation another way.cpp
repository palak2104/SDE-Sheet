int ninjaTraining(int n, vector<vector<int>> &arr)
{
    // Write your code here.
    vector<vector<int>>dp(n+1,vector<int>(4,-1));
    for(int i=0;i<3;i++){
        int maxi=0;
        for(int j=0;j<3;j++){
            if(i!=j){
                maxi=max(maxi,arr[0][j]);
            }
        }
        dp[0][i]=maxi;
    }
    dp[0][3]=max(dp[0][0],max(dp[0][1],dp[0][2]));
    for(int day=1;day<n;day++){
    for(int last=0;last<4;last++){
    dp[day][last]=0;
    for(int i=0;i<3;i++){
    if(i!=last)
    dp[day][last]=max(dp[day][last],arr[day][i]+dp[day-1][i]);  
    }
    }
    }
return dp[n-1][3];
}
