class Solution{
    int func(int arr[],int i,int j){
        if (i == j)
        return 0;
    int mini = INT_MAX;
 
    for (int k = i; k < j; k++)
    {
        int temp = func(arr, i, k)
                + func(arr, k + 1, j)
                + arr[i - 1] * arr[k] * arr[j];
 
        mini=min(mini,temp);
    }
 
    return mini;
    }
public:
    int matrixMultiplication(int n, int arr[])
    {
        // code here
        return func(arr,1,n-1);
    }
};
