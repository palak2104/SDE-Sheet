#include <bits/stdc++.h>

using namespace std;
void Subset(int ind,int n,int arr[],vector<int>&res,set<vector<int>>&s){
    if(ind==n){
        s.insert(res);
        return;
    }
     res.push_back(arr[ind]);
     Subset(ind+1,n,arr,res,s);
     res.pop_back();
     Subset(ind+1,n,arr,res,s);
     return;
}

int main()
{
   int n;
   cin>>n;
   int arr[n+10];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   set<vector<int>>s;
   vector<int>res;
   Subset(0,n,arr,res,s);
   for(auto it:s){
       for(auto i:it){
           cout<<i<<" ";
       }
       cout<<endl;
   }

    return 0;
}
