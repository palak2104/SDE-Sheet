int minimumPathSum(vector<vector<int>>& arr, int n){
	// Write your code here.
    //vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
    //dp[0][0]=arr[0][0];
    vector<int>temp(n+1);
    temp[0]=arr[0][0];
    for(int i=1;i<n;i++){
        vector<int>temp2(n+1);
        for(int j=0;j<n;j++){
            if(j==0)
            temp2[j]=arr[i][j]+temp[j];
            else if(i==j)
            temp2[j]=arr[i][j]+temp[j-1];
            else
            temp2[j]=min(arr[i][j]+temp[j],arr[i][j]+temp[j-1]);
        }
        
        temp=temp2;
    }
  int res=1e7;
   
  for(int i=0;i<n;i++)
  res=min(res,temp[i]);
    return res;
}
