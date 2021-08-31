class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> bottomView(Node *root)
    {
        //Your code here
        vector<int>res;
        if(root==NULL)
        return res;
        queue<pair<Node*,int>>q;
        map<int,int>m;
        q.push({root,0});
        while(!q.empty()){
        Node* node=q.front().first;
        int virtical=q.front().second;
        q.pop();
        m[virtical]=node->data;
        if(node->left){
            q.push({node->left,virtical-1});
        }
        if(node->right){
            q.push({node->right,virtical+1});
        }
        }
     for(auto it:m){
         res.push_back(it.second);
     } 
     return res;
    }

};
