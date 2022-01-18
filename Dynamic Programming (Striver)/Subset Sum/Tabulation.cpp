class Solution{   
public:

    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        vector<vector<int>>dp(N+1,vector<int>(sum+1));
        for(int i=0;i<N+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                dp[i][j]=0;
                if(j==0)
                dp[i][j]=1;
            }
        }
        for(int i=1;i<=N;i++){
            for(int cs=1;cs<=sum;cs++){
            if(arr[i-1]<=cs){
                dp[i][cs]=dp[i-1][cs]||dp[i-1][cs-arr[i-1]];
            }
            else dp[i][cs]=dp[i-1][cs];
            }
        }
        return dp[N][sum];
    }
};
