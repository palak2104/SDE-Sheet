class Solution {
    void dfs(int i,vector<int>&vis,vector<int>adj[]){
        vis[i]=1;
        for(auto it:adj[i]){
            if(!vis[it])
            dfs(it,vis,adj);
        }
    }
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(auto it:edges){
            adj[it[1]].push_back(it[0]);
        }
        vector<vector<int>>arr(n);
        for(int i=0;i<n;i++){
            vector<int>vis(n,0);
            dfs(i,vis,adj);
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(vis[j])
                arr[i].push_back(j);
            }
        }
        return arr;
    }
};
// https://leetcode.com/contest/biweekly-contest-73/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/
