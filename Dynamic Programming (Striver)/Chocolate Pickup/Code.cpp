int func(int i,int j1,int j2,int m,int n,vector<vector<int>> &arr,vector<vector<vector<int>>>&dp){
	if(j1<0 || j1>=n||j2<0 ||j2>=n) return -1e8;
	if(i==m-1){
		if(j1==j2)
		return arr[i][j1];
		else return arr[i][j1]+arr[i][j2];
	}
	if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
	int res=INT_MIN;
	for(int di=-1;di<=1;di++){
		for(int dj=-1;dj<=1;dj++){
			if(j1==j2)
			res=max(res,arr[i][j1]+func(i+1,j1+di,j2+dj,m,n,arr,dp));
			else
			res=max(res,arr[i][j1]+arr[i][j2]+func(i+1,j1+di,j2+dj,m,n,arr,dp));
		}
	}
	return dp[i][j1][j2]=res;
}
int maximumChocolates(int m, int n, vector<vector<int>> &arr) {
    // Write your code here.
	vector < vector < vector < int >>> dp(m+1, vector < vector < int >> (n+1, vector < int
  > (n+1, -1)));
	return func(0,0,n-1,m,n,arr,dp);
}
