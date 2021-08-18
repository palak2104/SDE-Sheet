#include <bits/stdc++.h>

using namespace std;
bool dfs(int node,vector<int>&visited,vector<int>&dfsVisited,vector<int>arr[]){
    visited[node]=1;
    dfsVisited[node]=1;
    for(auto it:arr[node]){
        if(!visited[it]){
        if(dfs(it,visited,dfsVisited,arr)) return true;
        }
        else if(dfsVisited[it]==1){
            return true;
        }
    }
    dfsVisited[node]=0;
    return false;
}
bool CheckCycle(int n,int e,vector<int>arr[]){
    vector<int>visited(n+1,0);
    vector<int>dfsVisited(n+1,0);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(dfs(i,visited,dfsVisited,arr))
            return true;
        }
    }
    return false;
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
   if(CheckCycle(n,e,arr))
   cout<<"There is a cycle";
   else cout<<"There is no cycle";
    return 0;
}
