class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* node=root;
        while(true){
            if(node->val>val){
                if(node->left)
                node=node->left;
                else{
                    TreeNode newNode= new TreeNode(val);
                    node->left=newNode;
                    break;
                }
            }
            else{
             if(node->right)
                node=node->right;
                else{
                    TreeNode newNode= new TreeNode(val);
                    node->right=newNode;
                    break;
                }
            }
        }
        return root;
    }
};
