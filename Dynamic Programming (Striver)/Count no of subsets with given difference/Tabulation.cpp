#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int differenceCount(int arr[], int N,int diff)  { 
	    // Your code goes here
	    int totSum=0;
	    for(int i=0;i<N;i++)
	    totSum+=arr[i];
	    int sum=(totSum+diff)/2;
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
                dp[i][cs]=dp[i-1][cs]+dp[i-1][cs-arr[i-1]];
            }
            else dp[i][cs]=dp[i-1][cs];
            }
        }
        return dp[N][sum];
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	
        int n;
        cin >> n;
        int diff;
        cin>>diff;
        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.differenceCount(a, n,diff) << "\n";
	     
    return 0;
}  // } Driver Code Ends
