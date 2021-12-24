void revbfs(queue<Node*>&q,vector<int>&res){
    if(q.empty())
    return;
    vector<int>tres;
    int n=q.size();
    for(int i=0;i<n;i++){
        Node* node=q.front();
        tres.push_back(node->data);
        q.pop();
        if(node->left)
        q.push(node->left);
        if(node->right)
        q.push(node->right);
    }
    revbfs(q,res);
    for(auto it:tres)
    res.push_back(it);
}
vector<int> reverseLevelOrder(Node *root)
{
    // code here
    queue<Node*>q;
    q.push(root);
    vector<int>res;
    revbfs(q,res);
    return res;
}
