bool path(TreeNode* root,vector<int>&res,int target){
    if(!root)
    return false;
    res.push_back(root->val);
    if(root->val==target)
    return true;

    if(path(root->left,res,target))
    return true;
    if(path(root->right,res,target))
    return true;
    res.pop_back();
    return false;

}
vector<int> Solution::solve(TreeNode* root, int target) {
    vector<int>res;
    if(root==NULL)
    return res;
    if(root->val==target){
        res.push_back(target);
        return res;
    }
    path(root,res,target);
    return res;
}
