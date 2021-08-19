#include <bits/stdc++.h>

using namespace std;
void Topology(int node,vector<int>&visited,stack<int>&st,vector<int>arr[]){
    visited[node]=1;
    for(auto it:arr[node]){
        if(!visited[it])
        Topology(it,visited,st,arr);
    }
    st.push(node);
}
stack<int>CheckDfs(int n,int e,vector<int>arr[]){
    vector<int>visited(n+1,0);
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            Topology(i,visited,st,arr);
        }
    }
    return st;
}
void dfs(int node,vector<int>&visited,vector<int>graph[]){
    visited[node]=1;
    cout<<node<<" ";
    for(auto it:graph[node]){
        if(!visited[it]){
        dfs(it,visited,graph);
        }
    }
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
   }
 stack<int>topo=CheckDfs(n,e,arr);
 vector<int>graph[n+1];
 for(int i=0;i<=n;i++){
     for(auto it:arr[i]){
         graph[it].push_back(i);
     }
 }
 vector<int>res;
 vector<int>visited(n+1,0);
 while(!topo.empty()){
     int node=topo.top();
     topo.pop();
     if(!visited[node]){
         cout<<"component"<<endl;
         dfs(node,visited,graph);
         cout<<endl;
     }
     
 }
    return 0;
}
