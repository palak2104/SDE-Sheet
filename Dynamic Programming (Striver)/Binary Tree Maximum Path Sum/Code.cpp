class Solution {
    int func(TreeNode* root,int &res){
        if(root==NULL) return 0;
        int left=func(root->left,res);
        int right=func(root->right,res);
        res=max(res,left+right+root->val);
        int temp=max(left,right)+root->val;
        if(temp<0) return 0;
        return temp;
    }
public:
    int maxPathSum(TreeNode* root) {
        int res=INT_MIN;
        func(root,res);
        return res;
    }
};
