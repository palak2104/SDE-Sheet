int Solution::solve(TreeNode* root, int start) {
    if(root==NULL)
    return 0;
    TreeNode* target;
    unordered_map<TreeNode*,TreeNode*>parent;
    queue<TreeNode*>p;
        p.push(root);
        parent[root]=NULL;
        while(!p.empty()){
            TreeNode* node=p.front();
            p.pop();
            if(node->val==start)
            target=node;
            if(node->left){
                p.push({node->left});
                parent[node->left]=node;
            }
             if(node->right){
                p.push({node->right});
                parent[node->right]=node;
            }
        }
    queue<TreeNode*>q;
    q.push(target);
    vector<int>visited(500,0);
    visited[target->val]=1;
    int maxTime=0;
    while(!q.empty()){
    int n=q.size();
    int flag=0;
    for(int i=0;i<n;i++){
    TreeNode* node=q.front();
    q.pop();
      if(parent[node]!=NULL){
          if(!visited[parent[node]->val]){
              q.push(parent[node]);
              visited[parent[node]->val]=1;
              flag=1;
          }
      }  
       if(node->left){
          if(!visited[node->left->val]){
              q.push(node->left);
              visited[node->left->val]=1;
              flag=1;
          }
      }  
       if(node->right){
          if(!visited[node->right->val]){
              q.push(node->right);
              visited[node->right->val]=1;
              flag=1;
          }
      }  
    }
    if(flag) maxTime++; 
    }
    return maxTime;
}
