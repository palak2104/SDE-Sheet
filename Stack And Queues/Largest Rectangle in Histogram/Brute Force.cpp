class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
      int n=arr.size();
      vector<int>hash(n);
      for(int i=0;i<n;i++){
          int count=1;
          int j=i-1;
          while(j>=0 && arr[j]>=arr[i]){
              count++;
              j--;
          }
          j=i+1;
          while(j<n && arr[j]>=arr[i]){
              j++;
              count++;
          }
          hash[i]=count;
      }
      int ans=INT_MIN;
      for(int i=0;i<n;i++){
          ans=max(ans,arr[i]*hash[i]);
      }
      return ans;
    }
};
