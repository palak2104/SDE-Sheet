class Solution {
public:
    int countNodes(TreeNode* root) {
       if(root==NULL)
          return 0;
        int lh=0;
        TreeNode* node=root;
        while(node!=NULL){
            lh++;
            node=node->left;
        }
        int rh=0;
        node=root;
        while(node!=NULL){
            rh++;
            node=node->right;
        }
        if(lh==rh) return pow(2,lh)-1;
        
        return countNodes(root->left)+countNodes(root->right)+1;
    }
};
