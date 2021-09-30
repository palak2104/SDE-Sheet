class Solution{   
public:
int dp[101][100001];
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        dp[N+1][sum+1];
        for(int i=0;i<N+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                dp[i][j]=0;
                if(j==0)
                dp[i][j]=1;
            }
        }
        for(int i=0;i<N+1;i++){
            for(int j=0;j<sum+1;j++){
                
            }
        }
    }
};
