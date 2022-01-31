class Solution{
    public:
    int findSubArraySum(int arr[], int n, int k)
    {
        // code here
        int count=0;
        int sumi=0;
        for(int i=0;i<n;i++){
            sumi+=arr[i];
            if(sumi==k)  count++;
            int sumj=sumi;
            for(int j=i+1;j<n;j++){
                sumj+=arr[j];
                if(sumj-sumi==k)
                count++;
            }
        }
        return count;
    }
};
