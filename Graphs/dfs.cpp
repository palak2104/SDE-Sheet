#include <bits/stdc++.h>

using namespace std;
void bfs(int node,vector<int>&visited,vector<int>&res,vector<int>arr[]){
    visited[node]=1;
    res.push_back(node);
    for(auto it:arr[node]){
        if(!visited[it])
        bfs(it,visited,res,arr);
    }
}
vector<int>CheckBfs(int n,int e,vector<int>arr[]){
    vector<int>visited(n+1,0);
    vector<int>res(n+1);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            bfs(i,visited,res,arr);
        }
    }
    return res;
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
   for(auto it:CheckBfs(n,e,arr)){
       cout<<it<<" ";
   }
    return 0;
}
