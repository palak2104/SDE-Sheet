#include <bits/stdc++.h>

using namespace std;
bool bfs(int i,vector<int>&visited,vector<int>arr[]){
    visited[i]=1;
    queue<pair<int,int>>q;
    q.push({i,-1});
    while(!q.empty()){
        int node=q.front().first;
        int par=q.front().second;
        q.pop();
        for(auto it:arr[node]){
            if(!visited[it]){
                visited[it]=1;
                q.push({it,node});
            }
            else if(it!=par){
            cout<<node<<" "<<it;
            return true;
            }
        }
        
    }
   return false; 
}
bool CheckCycle(int n,int e,vector<int>arr[]){
    vector<int>visited(n+1,0);
    for(int i=0;i<n;i++){
        if(!visited[i]){
            if(bfs(i,visited,arr))
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
