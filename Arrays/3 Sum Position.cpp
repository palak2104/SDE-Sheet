#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,sum;
   cin>>n>>sum;
   vector<int>arr(n);
   unordered_map<int,int>m;
   for(int i=0;i<n;i++){
   cin>>arr[i];
   m.insert({arr[i],i+1});
   }
   vector<int>ans(3);
   sort(arr.begin(),arr.end());
   for(int i=0;i<n;i++){
    vector<int>res;
    res.push_back(m[arr[i]]);
    int target=sum-arr[i];
    int low=i+1;
    int high=n-1;
    int flag=0;
    while(low<high){
        int sum=arr[low]+arr[high];
        if(sum==target){
          res.push_back(m[arr[low]]);
          res.push_back(m[arr[high]]);
          flag=1;
          break;
      } 
      else if(sum<target)
      {
       low++;   
      }
      else{
          high--;
      }
    }
    if(flag==1){
    ans=res;
    break;
    }
   }
  sort(ans.begin(),ans.end());
  for(auto it:ans)
  cout<<it<<" ";
   
   

    return 0;
}
