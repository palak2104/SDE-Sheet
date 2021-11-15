class Solution {
private:
    bool isCycle(int node, vector<int>&vis, vector<int>&pathvis,vector<int>adj[]){
        vis[node]=1;
        pathvis[node]=1;
        for(auto it:adj[node]){
        if(vis[it]==0){
            if(!isCycle(it,vis,pathvis,adj)) return false;
        }
        else if(pathvis[it]==1) return false;
        }
        pathvis[node]=0;
        return true;
    }
public:
    bool canFinish(int n, vector<vector<int>>& p) {
    vector<int>vis(n,0);
    vector<int>pathvis(n,0);
    vector<int>adj[n];
    for(auto it:p){
    adj[it[1]].push_back(it[0]);
    }
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            if(!isCycle(i,vis,pathvis,adj))
            return false;
        }
    }
    return true;
    }
};
