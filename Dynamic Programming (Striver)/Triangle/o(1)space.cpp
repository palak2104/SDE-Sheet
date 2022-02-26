int minimumPathSum(vector<vector<int>>&arr, int n){
	// Write your code here.
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i+1;j++){
            arr[i][j]=arr[i][j]+min(arr[i+1][j],arr[i+1][j+1]);
        }
    }
    return arr[0][0];
}
