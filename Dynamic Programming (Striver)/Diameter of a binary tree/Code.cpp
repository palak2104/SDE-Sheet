class Solution {
    int func(Node* root, int &res) {
        if(root==NULL) 
        return 0;
        int left=func(root->left, res);
        int right=func(root->right, res);
        res=max(res,left+right+1);
        return 1+max(left,right);
    }
  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int res=INT_MIN;
        func(root,res);
        return res; 
    }
};
