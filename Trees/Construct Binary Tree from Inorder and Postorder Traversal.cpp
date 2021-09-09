class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
     map<int,int>mp;
       for(int i=0;i<inorder.size();i++){
           mp[inorder[i]]=i;
       }
       TreeNode* root=makeTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mp);
       return root;    
    }
    TreeNode* makeTree(vector<int>& inorder,int instart,int inend,vector<int>& postorder,
    int poststart,int postend, map<int,int>&mp){
    if(instart>inend || poststart>postend) return NULL;
    TreeNode* root= new TreeNode(postorder[postend]);
    int inRoot= mp[root->val];
    int numsLeft=inRoot-instart;
    root->left=makeTree(inorder,instart,inRoot-1,postorder,poststart,poststart+inRoot-instart-1,mp);
    root->right=makeTree(inorder,inRoot+1,inend,postorder,poststart+inRoot-instart,postend-1,mp);
    return root;
    }
};
