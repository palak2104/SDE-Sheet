#include <bits/stdc++.h>

using namespace std;
int findPar(int node,vector<int>&par){
    if(par[node]==node)
    return node;
    
    par[node]=findPar(par[node]);
    return par[node];
}

void union(int a,int b,vector<int>&rank,vector<int>&par){
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
    vector<int>rank(n+1,0);
    vector<int>par(n+1);
    for(int i=0;i<=n+1;i++){
        par[i]=i;
    }
    int a,b;
    cin>>a>>b;
    union(a,b,rank,par);

    return 0;
}
