class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    void func(int i,int arr[],vector<int>&lis,int n){
        if(i==n-1)
        return;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i] && lis[j]<=lis[i])
            lis[j]++;
        }
        func(i+1,arr,lis,n);
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>lis(n,1);
       func(0,a,lis,n);
       int maxi=INT_MIN;
       for(auto it:lis)
       maxi=max(maxi,it);
       return maxi;
    }
};
