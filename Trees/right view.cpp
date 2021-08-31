class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
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
           if(node->right)
           q.push(node->right);
           if(node->left)
           q.push(node->left);
           }
           
       }
       return res;
    }
};

