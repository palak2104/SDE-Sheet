#include <bits/stdc++.h>

using namespace std;
vector<int>func(vector<int>arr,int k){
    int n=arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<=k;i++){
        pq.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        arr[i]=pq.top();
        pq.pop();
        if(i+k+1<n)
        pq.push(arr[i+k+1]);
    }
    
    return arr;
}
int main()
{
   int n,k;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cin>>k;
   vector<int>res=func(arr,k);
   for(auto it:res) cout<<it<<" ";
    return 0;
}
