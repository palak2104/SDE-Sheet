#include <bits/stdc++.h>

using namespace std;

void findBridge(int node,int par,vector<int>&vis,vector<int>&in,vector<int>&low,int timer,vector<int>arr[],vector<int>&isArticulation){
    vis[node]=1;
    in[node]=timer++;
    low[node]=timer++;
    int child=0 ;
    for(auto it:arr[node]){
        if(it==par) continue;
        if(!vis[it]){
            child++;
            findBridge(it, node, vis, in, low, timer, arr,isArticulation); 
            if(low[it]>=in[node] && par!=-1){
                isArticulation[node]=1;
            }
            low[node]=min(low[it],low[node]);
        }
        else{
            low[node]=min(low[it],low[node]); 
        }
    }
    if(par=-1 && child>1){
        isArticulation[node]=1;
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
       arr[v].push_back(u);
   }
    vector<int> in(n+1, -1);
	vector<int> low(n+1, -1); 
	vector<int> vis(n+1, 0); 
	vector<int>isArticulation(n+1,0);
	int timer = 0; 
	for(int i = 0;i<=n;i++) {
	    if(!vis[i]) {
	        findBridge(i, -1, vis, in, low, timer, arr,isArticulation); 
	    }
	}
	for(int i=1;i<=n;i++){
	    if(isArticulation[i]==1)
	    cout<<i<<" ";
	}

    return 0;
}
