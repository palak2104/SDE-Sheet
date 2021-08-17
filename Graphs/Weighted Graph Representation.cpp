#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int e;
   cin>>e;
   vector<pair<int,int>>arr[n+1];
   for(int i=0;i<e;i++){
       int u,v,wt;
       cin>>u>>v>>wt;
       arr[u].push_back({v,wt});
       arr[v].push_back({u,wt});
   }
   for(int i=0;i<=n;i++){
       cout<<i<<"--> ";
       for(auto it:arr[i]){
           cout<<"("<<it.first<<" "<<it.second<<")"<<" ";
       }
       cout<<endl;
   }

    return 0;
}
