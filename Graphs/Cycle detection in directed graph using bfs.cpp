#include <bits/stdc++.h>

using namespace std;

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
   vector<int>indegree(n+1);
   for(int i=0;i<n;i++){
       for(auto it:arr[i]){
           indegree[it]++;
       }
   }
   queue<int>q;
   for(int i=0;i<n;i++){
       if(indegree[i]==0)
       q.push(i);
   }
   vector<int>topo;
   while(!q.empty()){
       int node=q.front();
       q.pop();
       topo.push_back(node);
       for(auto it:arr[node]){
           indegree[it]--;
           if(indegree[it]==0)
           q.push(it);
       }
   }
   if(topo.size()!=n)
   cout<<"Graph is Cyclic";
   else cout<<"Graph is acyclic";
    return 0;
}
