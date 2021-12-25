vector<int> diagonal(Node *root)
{
   // your code here
   queue<Node*>q;
   vector<int>res;
   if(!root) return res;
   q.push(root);
   while(!q.empty()){
       Node* node=q.front();
       q.pop();
       while(node!=NULL){
           if(node->left) q.push(node->left);
           res.push_back(node->data);
           node=node->right;
       }
   }
   return res;
}
