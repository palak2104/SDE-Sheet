#include <bits/stdc++.h>

using namespace std;
int findPar(int node,vector<int>&par){
    if(par[node]==node)
    return node;
    
    par[node]=findPar(par[node],par);
    return par[node];
}

void unionNode(int a,int b,vector<int>&rank,vector<int>&par){
    a=findPar(a,par);
    b=findPar(b,par);
    
if(rank[a]<rank[b]){
    par[a]=b;
}else if(rank[a]>rank[b]){
    par[b]=a;
}else{
     par[a]=b;
     rank[b]++;
}
}

int main()
{
   int n;
   cin>>n;
   int e;
   cin>>e;
   vector<int>rank(n+1,0);
    vector<int>par(n+1);
    for(int i=0;i<=n;i++){
        par[i]=i;
    }
   vector<pair<int,pair<int,int>>>arr(n+1);
   for(int i=0;i<e;i++){
       int u,v,wt;
       cin>>u>>v>>wt;
       arr.push_back({wt,{u,v}});
   }
   sort(arr.begin(),arr.end());
   vector<pair<int,int>>mst;
   int cost=0;
   for(auto it:arr){
       if(findPar(it.second.first,par)!=findPar(it.second.second,par))
      {
      cost+=it.first;
      mst.push_back({it.second.first,it.second.second});
      unionNode(it.second.first,it.second.second,rank,par);
      }
    }
cout<<"cost is "<<cost<<endl;
cout<<"Graph is:"<<endl;
for(auto it:mst){
    cout<<it.first<<" "<<it.second<<endl;;
}
    return 0;
}

