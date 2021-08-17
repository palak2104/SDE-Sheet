#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int e;
   cin>>e;
   vector<int>arr[n+1];
   for(int i=0;i<e;i++){
       int u,v;
       cin>>u>>v;
       arr[u].push_back(v);
       arr[v].push_back(u);
   }
   for(int i=0;i<=n;i++){
       cout<<i<<"--> ";
       for(auto it:arr[i]){
           cout<<it<<" ";
       }
       cout<<endl;
   }

    return 0;
}
