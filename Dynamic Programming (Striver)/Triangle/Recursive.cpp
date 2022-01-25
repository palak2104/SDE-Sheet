int func(vector<vector<int>>&arr, int n,int i,int j){
    if(i==n)
    return 0;
    int left=arr[i][j]+func(arr,n,i+1,j);
    int right=arr[i][j]+func(arr,n,i+1,j+1);
    return min(left,right);
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
    return func(triangle,n,0,0);
    
}
