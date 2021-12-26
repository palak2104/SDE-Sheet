class Solution{
  public:
    /*You are required to complete this method*/
    int height(Node* root, bool& same){		
        if(!root) return 0;
        int lh=height(root->left, same);
        int rh=height(root->right, same);
        if(lh && rh && lh!=rh){	 // extra condition in height fn
            same=false;
        }
        return max(lh, rh)+1;
    }
    bool check(Node *root)
    {
        //Your code here
        bool issame=true;
        height(root,issame);
        return issame;
    }
};
