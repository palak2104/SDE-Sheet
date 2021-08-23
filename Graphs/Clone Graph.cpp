class Solution {
    void dfs(Node* node,Node* copy,vector<Node*>&vis){
        vis[copy->val]=copy;
        for(auto it:node->neighbors){
            if(vis[it->val]==NULL){
                Node* newnode= new Node(it->val);
                copy->neighbors.push_back(newnode);
                dfs(it,newnode,vis);
            }
            else{
               copy->neighbors.push_back(vis[it->val]); 
            }
        }
    }
public:
    Node* cloneGraph(Node* node) {
        
        
        if(node==NULL)
            return NULL;
        Node* copy= new Node(node->val);
        vector<Node*>vis(1000,NULL);
        dfs(node,copy,vis);
        return copy;
    }
};
