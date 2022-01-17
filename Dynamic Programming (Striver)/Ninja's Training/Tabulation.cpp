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
    for(int day=1;day<n;day++){
    for(int last=0;last<3;last++){
    arr[day][last]=arr[day][last]+dp[day-1][last];
    }
    for(int i=0;i<3;i++){
        int maxi=0;
        for(int j=0;j<3;j++){
            if(i!=j){
                maxi=max(maxi,arr[day][j]);
            }
        }
        dp[day][i]=maxi;
    }
    }
int maxi=0;
    for(int i=0;i<3;i++){
        maxi=max(maxi,dp[n-1][i]);
    }
  return maxi;  
}
