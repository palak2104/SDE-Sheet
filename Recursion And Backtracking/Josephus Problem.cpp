class Solution {
    int func(int i,vector<int>&arr,int k){
        if(arr.size()==1) return arr[0];
        int n=arr.size();
        int j=(i+k-1)%n;
        arr.erase(arr.begin()+j);
        return func(j,arr,k);
    }
  public:
    int safePos(int n, int k) {
        // code here
        vector<int>arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        return func(0,arr,k);
    }
};
