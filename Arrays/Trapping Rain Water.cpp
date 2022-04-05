class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        vector<int>left(n);
        vector<int>right(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
            left[i]=maxi;
        }
        maxi=INT_MIN;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,arr[i]);
            right[i]=maxi;
        }
        int res=0;
        for(int i=1;i<n-1;i++){
            int temp=min(left[i],right[i]);
            if(arr[i]<temp) res+=temp-arr[i];
        }
        return res;
    }
};
