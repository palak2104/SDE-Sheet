class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int a ,int b )
    {
       //Your code here 
       if(root==NULL)
       return NULL;
       if(root->data==a || root->data==b)
       return root;
       Node* l=lca(root->left,a,b);
       Node* r=lca(root->right,a,b);
       if(l && r)
       return root;
       if(!l && r)
       return r;
       if(l && !r)
       return l;
       if(!l && !r)
       return NULL;
    }
};
