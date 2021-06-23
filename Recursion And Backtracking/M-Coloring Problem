#include <bits/stdc++.h>

using namespace std;
bool isSafe(vector<int>graph[],int node,int color[],int n,int col){
    for(auto it:graph[node])
    if(color[it]==col)
    return false;
    return true;
}
bool ColorGraph(int node,vector<int>graph[],int color[],int m,int n){
   if(node==n+1)
   return true;
   for(int col=1;col<=m;col++){
       if(isSafe(graph,node,color,n,col)){
           color[node]=col;
           if(ColorGraph(node+1,graph,color,m,n)) return true;
           color[node]=0;
       }
   }
   return false;
}

int main()
{
    int n;
    cin>>n;
   vector<int>graph[n+1];
   
   int m;
   cin>>m;
   int v;
   cin>>v;
   int color[n+1]={0};
   for(int i=0;i<v;i++){
       int a,b;
       cin>>a>>b;
       graph[a].push_back(b);
       graph[b].push_back(a);
   }
   if(ColorGraph(0,graph,color,m,n)){
       cout<<"1";
   }
   else cout<<"0";

    return 0;
}
