#include <bits/stdc++.h>

using namespace std;

void findBridge(int node,int par,vector<int>&vis,vector<int>&in,vector<int>&low,int timer,vector<int>arr[]){
    vis[node]=1;
    in[node]=timer++;
    low[node]=timer++;
    for(auto it:arr[node]){
        if(it==par) continue;
        if(!vis[it]){
            findBridge(it, node, vis, in, low, timer, arr); 
            if(low[it]>in[node]){
                cout<<it<<" "<<node<<" is a bridge"<<endl;
            }
            low[node]=min(low[it],low[node]);
        }
        else{
            low[node]=min(low[it],low[node]); 
        }
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
    vector<int> in(n, -1);
	vector<int> low(n, -1); 
	vector<int> vis(n, 0); 
	int timer = 0; 
	for(int i = 0;i<n;i++) {
	    if(!vis[i]) {
	        findBridge(i, -1, vis, in, low, timer, arr); 
	    }
	}

    return 0;
}
