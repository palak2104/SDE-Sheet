#include <bits/stdc++.h>

using namespace std;
void bfs(int i,vector<int>&dist,vector<int>arr[]){
    queue<int>q;
    q.push(i);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:arr[node]){
                if(dist[it]>dist[node]+1){
                dist[it]=dist[node]+1;
                q.push(it);
                }
            
        }
    }
    
}
vector<int>CheckDfs(int n,int e,vector<int>arr[]){
    vector<int>dist(n+1,INT_MAX);
    int source;
    cin>>source;
    dist[source]=0;
    bfs(source,dist,arr);
    return dist;
}

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
   for(auto it:CheckDfs(n,e,arr)){
       cout<<it<<" ";
   }
    return 0;
}
