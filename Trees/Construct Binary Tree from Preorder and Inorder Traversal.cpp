class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       map<int,int>mp;
       for(int i=0;i<inorder.size();i++){
           mp[inorder[i]]=i;
       }
       TreeNode* root=buildTrees(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,mp);
       return root; 
    }
    TreeNode* buildTrees(vector<int>& inorder,int instart,int inend,vector<int>& preorder,
    int prestart,int preend, map<int,int>&mp){
    if(instart>inend || prestart>preend) return NULL;
    TreeNode* root= new TreeNode(preorder[prestart]);
    int inRoot= mp[root->val];
    int numsLeft=inRoot-instart;
    root->left=buildTrees(inorder,instart,inRoot-1,preorder,prestart+1,prestart+numsLeft,mp);
    root->right=buildTrees(inorder,inRoot+1,inend,preorder,prestart+numsLeft+1,preend,mp);
    return root;
    }
};
