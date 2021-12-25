vector<int> diagonal(Node *root)
{
   // your code here
   map<int,map<int,multiset<int>>>m;
   queue<pair<Node*,pair<int,int>>>q;
   q.push({root,{0,0}});
   while(!q.empty()){
       Node* node=q.front().first;
       int vertical=q.front().second.first;
       int level=q.front().second.second;
       m[vertical][level].insert(node->data);
       q.pop();
       if(node->left){
           q.push({node->left,{vertical-1,level+1}});
       }
       if(node->right){
           q.push({node->right,{vertical+1,level+1}});
       }
   }
   int vertical=0;
   int level=0;
   vector<int>res;
   while(root!=NULL){
    vector<int>temp;
    int v=vertical;
    int l=level;
    while(!m[v][l].empty()){
        temp.insert(temp.end(),m[v][l].begin(),m[v][l].end());
        v++;
        l++;
    }
    for(auto it:temp){
    res.push_back(it);
    }
    vertical--;
    level++;
    root=root->left;
   }
   return res;
}
