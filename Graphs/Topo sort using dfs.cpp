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
vector<int>CheckDfs(int n,int e,vector<int>arr[]){
    vector<int>visited(n+1,0);
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            Topology(i,visited,st,arr);
        }
    }
    vector<int>topo;
    while(!st.empty()){
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
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
   for(auto it:CheckDfs(n,e,arr)){
       cout<<it<<" ";
   }
    return 0;
}
