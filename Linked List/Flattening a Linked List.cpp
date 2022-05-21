Node* merge(Node* a,Node* b){
    Node* dummy=new Node(0);
    Node* temp=dummy;
    while(a!=NULL && b!=NULL){
        if(a->data<b->data){
        temp->bottom=a;
        temp=a;
        a=a->bottom;
        }
        else{  
        temp->bottom=b;
        temp=b; 
        b=b->bottom;
        }
    }
    if(a) temp->bottom=a;
	if(b) temp->bottom=b;
    return dummy->bottom;
    
}
Node *flatten(Node *root)
{
   
        if (root == NULL || root->next == NULL) 
            return root; 
  
        root->next = flatten(root->next); 
  
        root = merge(root, root->next); 
  
        return root; 
}
