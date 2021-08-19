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
   int source;
   cin>>source;
   vector<int>dist(n+1,INT_MAX);
   vector<int>mst(n+1,0);
   dist[source]=0;
   mst[source]=1;
   priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
   pq.push({0,source});
   int cost=0;
   for(int i=0;i<=n-1;i++){
       int node=pq.top().second;
       pq.pop();
       for(auto it:arr[node]){
           if(!mst[it.first] && dist[it.first]>it.second){
               mst[it.first]=1;
               dist[it.first]=it.second;
               cost+=dist[it.first];
               pq.push({dist[it.first],it.first});
           }
       }
   }
   cout<<cost<<endl;
   for(auto it:dist){
       cout<<it<<" ";
   }
    return 0;
}
