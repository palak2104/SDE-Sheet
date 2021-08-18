#include <bits/stdc++.h>

using namespace std;
void Topology(int node,vector<int>&visited,stack<int>&st,vector<pair<int,int>>arr[]){
    visited[node]=1;
    for(auto it:arr[node]){
        if(!visited[it.first])
        Topology(it.first,visited,st,arr);
    }
    st.push(node);
}
stack<int>CheckDfs(int n,int e,vector<pair<int,int>>arr[]){
    vector<int>visited(n+1,0);
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            Topology(i,visited,st,arr);
        }
    }
    return st;
}

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
   }
   stack<int>st=CheckDfs(n,e,arr);
   vector<int>dist(n+1,INT_MAX);
   dist[st.top()]=0;
   while(!st.empty()){
       int node=st.top();
       st.pop();
       for(auto it:arr[node]){
           if(dist[it.first]>dist[node]+it.second)
           dist[it.first]=dist[node]+it.second;
       }
   }
   for(auto it:dist)
   cout<<it<<" ";
    return 0;
}
