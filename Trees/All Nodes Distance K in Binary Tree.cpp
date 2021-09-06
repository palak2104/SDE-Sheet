class Solution {
    void findParent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent){
        queue<TreeNode*>q;
        q.push(root);
        parent[root]=NULL;
        while(!q.empty()){
            TreeNode* node=q.front();
            q.pop();
            if(node->left){
                q.push({node->left});
                parent[node->left]=node;
            }
             if(node->right){
                q.push({node->right});
                parent[node->right]=node;
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
    vector<int>res;
    if(root==NULL)
    return res;
    unordered_map<TreeNode*,TreeNode*>parent;
    findParent(root,parent);
    queue<pair<TreeNode*,int>>q;
    q.push({target,0});
    vector<int>visited(500,0);
    visited[target->val]=1;
    while(!q.empty()){
        TreeNode* node=q.front().first;
        int distance=q.front().second;
        q.pop();
        if(distance==k){
            res.push_back(node->val);
            continue;
        }
      if(parent[node]!=NULL){
          if(!visited[parent[node]->val]){
              q.push({parent[node],distance+1});
              visited[parent[node]->val]=1;
          }
      }  
       if(node->left){
          if(!visited[node->left->val]){
              q.push({node->left,distance+1});
              visited[node->left->val]=1;
          }
      }  
       if(node->right){
          if(!visited[node->right->val]){
              q.push({node->right,distance+1});
              visited[node->right->val]=1;
          }
      }  
    }
    return res;
    }
};
