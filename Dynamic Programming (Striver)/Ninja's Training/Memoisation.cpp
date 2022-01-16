int func(int day,vector<vector<int>>&arr,vector<vector<int>>dp,int last){
    if(day==0){
        int maxt=0;
        for(int i=0;i<3;i++){
        if(i!=last){
        int temp=arr[day][i];
        maxt=max(maxt,temp);
        }
        }
        return maxt;
    }
    if(dp[day][last]!=-1)
    return dp[day][last];
    
    int maxi=0;
    for(int i=0;i<3;i++){
        if(i!=last){
        int task=arr[day][i]+func(day-1,arr,dp,i);
        maxi=max(maxi,task);
        }
    }
    return dp[day][last]=maxi;
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>>dp(n+1,vector<int>(4,-1));
    return func(n-1,points,dp,3);
    
}
