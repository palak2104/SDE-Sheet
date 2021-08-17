#include <bits/stdc++.h>

using namespace std;
bool isBipartite(int x,vector<int>&col,vector<int>arr[]){
    col[x]=0;
    queue<int>q;
    q.push(x);
    while(!q.empty()){
       int node=q.front();
       q.pop();
       for(auto it:arr[node]){
           if(col[it]==-1){
               col[it]=1-col[node];
               q.push(it);
           }
           else if(col[it]==col[node])
           return false;
       }
    }
    return true;
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
   vector<int>col(n+1,-1);
   int source;
   cin>>source;
   if(isBipartite(source,col,arr))
   cout<<"Graph is  bipartite";
   else cout<<"Graph is not bipartite";

    return 0;
}
