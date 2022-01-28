class Solution{
    
	public:
	int minCoins(int coins[], int n, int sum) 
	{ 
	    // Your code goes here
	    //vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	    vector<int>temp(sum+1,1e8);
	    for(int i=1;i<=n;i++){
	    vector<int>temp2(sum+1,0);
	    for(int j=1;j<=sum;j++){
	      if(j-coins[i-1]>=0)
	      temp2[j]=min(1+temp2[j-coins[i-1]],temp[j]);
	      else temp2[j]=temp[j];
	    }
	    temp=temp2;
	    }
	    int res=temp[sum];
	    if(res==1e8) return -1;
	    return res;
	} 
	  
};
