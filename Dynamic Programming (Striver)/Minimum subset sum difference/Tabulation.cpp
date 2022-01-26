class Solution{

  public:
	int minDifference(int arr[], int N)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<N;i++)
	    sum+=arr[i];
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
        int res=INT_MAX;
        for(int i=0;i<=sum/2;i++){
        if(dp[N][i]){
            int temp=abs(sum-(2*i));
            res=min(res,temp);
        }   
        }
        return res;
	} 
};
