int func(int i,int j,int n,vector<vector<int>> &arr){
    if(i==0){
        return arr[i][j];
    }
    int left=0,right=0,mid=0;
    if(j-1>=0)
    left=arr[i][j]+func(i-1,j-1,n,arr);
    mid=arr[i][j]+func(i-1,j,n,arr);
    if(j+1<n)
    right=arr[i][j]+func(i-1,j+1,n,arr);
    return max(left,max(mid,right));
}
int getMaxPathSum(vector<vector<int>> &arr)
{
    //  Write your code here.
    int m=arr.size();
    int n=arr[0].size();
    int res=-2147483648;
    for(int i=0;i<n;i++){
        res=max(res,func(m-1,i,n,arr));
    }
    return res;
}
