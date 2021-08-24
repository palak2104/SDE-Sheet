//Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
        if(root==NULL)
            return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            //vector<int>level;
            int n=q.size();
            for(int i=0;i<n;i++){
               Node* node=q.front();
               q.pop();
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
                ans.push_back(node->data);
          }
        }
        return ans;
    }
