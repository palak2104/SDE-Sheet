void changeTree(BinaryTreeNode < int > * node) {
    // Write your code here.
    if(node==NULL) return;
    int child=0;
    if(node->left){
     child+=node->left->data;
     
    }
    if(node->right){
     child+=node->right->data;
    }
    if(child>node->data) node->data=child;
    else{
        if(node->left) node->left->data=node->data;
        else if(node->right) node->right->data=node->data;
    }
    changeTree(node->left);
    changeTree(node->right);
    int tot=0;
    if(node->left) tot+= node->left->data;
    if(node->right) tot+= node->right->data;
    if(node->left or node->right)
    node->data = tot;
}  
