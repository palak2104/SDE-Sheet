class Solution{
    public:
    int findSubArraySum(int arr[], int n, int sum)
    {
        // code here
        int count=0;
        int ps[n+1];
        ps[0]=arr[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+arr[i];
            if(ps[i]==sum) count++;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(ps[j]-ps[i]==sum)
                count++;
            }
        }
        return count;
    }
};
