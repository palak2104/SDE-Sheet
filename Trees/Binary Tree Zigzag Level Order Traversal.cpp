class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(root==NULL)
        return res;
        queue<TreeNode*>q;
        q.push(root);
        int flag=0;
        while(!q.empty()){
            int n=q.size();
            vector<int>ans;
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                ans.push_back(node->val);
                
                if(node->left)
                q.push(node->left);
                
                if(node->right)
                q.push(node->right);
            }
        if(flag==1)
        reverse(ans.begin(),ans.end());
        flag=1-flag;
        res.push_back(ans);
        }
        return res;
    }
};
