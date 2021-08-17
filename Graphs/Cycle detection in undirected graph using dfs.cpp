#include <bits/stdc++.h>

using namespace std;
bool dfs(int node,vector<int>&visited,vector<int>&res,vector<int>arr[]){
    visited[node]=1;
    for(auto it:arr[node]){
        if(!visited[it]){
        if(!dfs(it,visited,res,arr)) return false;
        }
        if(it!=node){
            return false;
        }
    }
    return true;
}
bool CheckCycle(int n,int e,vector<int>arr[]){
    vector<int>visited(n+1,0);
    vector<int>res(n+1);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(dfs(i,visited,res,arr))
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
       arr[v].push_back(u);
   }
   if(CheckCycle(n,e,arr))
   cout<<"There is a cycle";
   else cout<<"There is no cycle";
    return 0;
}
