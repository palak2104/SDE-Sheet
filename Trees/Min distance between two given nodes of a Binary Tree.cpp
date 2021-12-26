class Solution{
    public:
    int dis(Node* node,int val){
        if(node==NULL)
        return 0;
        if(node->data==val)
        return 1;
        int a=dis(node->left,val);
        int b=dis(node->right,val);
        if(!a && !b) return 0;
        return a+b+1;
    }
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
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* lowCo=lca(root,a,b);
        int d1=dis(lowCo,a);
        int d2=dis(lowCo,b);
       
        return d1+d2-2;
    }
};
