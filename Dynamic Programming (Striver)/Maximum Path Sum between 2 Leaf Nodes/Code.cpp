class Solution {
    int func(Node* root,int &res){
        if(!root) return 0;
        int right=func(root->right,res);
        int left=func(root->left,res);
        if(!root->left && !root->right) return root->data;
        if(!root->left){
            return right+root->data;
        }
        if(!root->right){
            return left+root->data;
        }
        res=max(res,left+right+root->data);
        return max(left,right)+root->data;
    }
public:
    int maxPathSum(Node* root)
    {
        // code here
        int res=INT_MIN;
        int ans=func(root,res);
        if(!root->left or !root->right)
        res = max(res, ans);
        return res;
    }
};
