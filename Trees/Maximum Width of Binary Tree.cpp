 if(root==NULL) return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int width=INT_MIN;
        int minIndex;
        while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
        TreeNode* node= q.front().first;
        int index=q.front().second;
        q.pop();
        if(i==0)
        minIndex=index;
        if(i==n-1)
        width=max(width,index-minIndex+1);
        index=index-minIndex;
        if(node->left){
            q.push({node->left,2*index + 1});
        }
        if(node->right){
          q.push({node->right,2*index + 2});   
        }
        }
        }
        return width;
    }
