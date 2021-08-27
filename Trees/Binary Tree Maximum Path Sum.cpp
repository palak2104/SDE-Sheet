class Solution {
    int maxPath(TreeNode* node,int &sum){
        if(node==NULL)
        return 0;
        
        int lh=maxPath(node->left,sum);
        int rh=maxPath(node->right,sum);
        
        sum=max(sum,node->val+lh+rh);
        if(node->val+ max(lh,rh)<0)
        return 0;
        return node->val+ max(lh,rh);
    }
public:
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        maxPath(root,sum);
        return sum;
    }
};
