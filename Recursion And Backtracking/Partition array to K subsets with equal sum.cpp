#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
  bool isEqual(vector<int>sum){
      for(int i=1;i<sum.size();i++)
      if(sum[i]!=sum[i-1]) return false;
      return true;
  }
 bool Partition(int ind,int a[],int n,int k, vector<vector<int>>&set,vector<int>&sum,int subset){
      if(ind==n){
          if(subset==k){
          if(isEqual(sum)){
             return true; 
          }
          }
          return false;
      }
      for(int i=0;i<k;i++){
      if(set[i].size()>0){
      set[i].push_back(a[ind]);
      sum[i]+=a[ind];
      if(Partition(ind+1,a,n,k,set,sum,subset)) return true;
      sum[i]-=a[ind];
      set[i].pop_back();
      }
      else{
      set[i].push_back(a[ind]);
      sum[i]+=a[ind];
      if(Partition(ind+1,a,n,k,set,sum,subset+1)) return true;
      sum[i]-=a[ind];
      set[i].pop_back();
      break;
      }
      }
      
      return false;
  }
int sum(int a[],int n){
    int sume=0;
    for(int i=0;i<n;i++){
        sume+=a[i];
    }
    return sume;
}
  
    bool isKPartitionPossible(int a[], int n, int k)
    {
        // Your code here
        if(k==1) return true;
        if(k>n || sum(a,n)%k!=0) return false;
        //cout<<"hakuna matata";
         vector<vector<int>>set(k);
         for(int i=0;i<k;i++){
             vector<int>num;
             set[i]=num;
         }
         vector<int>sum(k,0);
         if(Partition(0,a,n,k,set,sum,0))
         return true;
         return false;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	Solution obj;
    	cout<<obj.isKPartitionPossible(a, n, k)<<endl;
    }
}  // } Driver Code Ends
