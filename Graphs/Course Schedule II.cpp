class Solution {
public:
        vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<int>topo;
        vector<int>adj[n];
        for(auto it:p){
        adj[it[1]].push_back(it[0]);
        }
        queue<int>q;
        vector<int>indegree(n,0);
        for(int i=0;i<n;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        for(int i=0;i<indegree.size();i++){
            if(indegree[i]==0)
            q.push(i);
        }
        int count=0;
        while(!q.empty()){
        int node=q.front();
        q.pop();
        topo.push_back(node);
        count++;
        for(auto it:adj[node]){
        indegree[it]--;
        if(indegree[it]==0)
        q.push(it);
        }
        }
        if(count!=n){
        vector<int>temp;
        return temp;
        }
        return topo;
    }
};
