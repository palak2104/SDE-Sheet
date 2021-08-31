vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>res;
       if(!root)
       return res;
       queue<Node*>q;
       map<int,int>m;
       q.push(root);
       while(!q.empty()){
           int n=q.size();
           for(int i=0;i<n;i++){
           if(i==0){
               res.push_back(q.front()->data);
           }
           Node* node=q.front();
           q.pop();
           if(node->left)
           q.push(node->left);
           if(node->right)
           q.push(node->right);
           }
           
       }
       return res;
}
