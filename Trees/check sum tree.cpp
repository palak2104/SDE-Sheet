class Solution
{
    int solve(Node* root){
        if(root==NULL)
        return 0;
        if(!root->right and !root->left)
        return root->data;
        int l=solve(root->left);
        if(l==-1) return -1;
        int r=solve(root->right);
        if(r==-1)  return -1;
        int sum=l+r;
        if(root->data!=sum)
        return -1;
        return root->data + sum;
    }
    public:
    bool isSumTree(Node* root)
    {
         // Your code here
         if(solve(root)==-1)
         return false;
         return true;
    }
};
