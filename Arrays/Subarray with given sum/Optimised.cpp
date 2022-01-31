class Solution{
    public:
    int findSubArraySum(int arr[], int n, int k)
    {
        // code here
        unordered_map<int,int>m;
        int count=0;
        int curr=0;
        for(int i=0;i<n;i++){
            curr+=arr[i];
            if(curr==k) count++;
            if(m[curr-k]) count+=m[curr-k];
            m[curr]++;
        }
        return count;
    }
};
