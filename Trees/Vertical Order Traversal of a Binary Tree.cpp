class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    vector<vector<int>>res;
    if(root==NULL)
    return res;
    queue<pair<TreeNode*,pair<int ,int>>>q;
    map<int,map<int,multiset<int>>>m;
    q.push({root,{0,0}});
    while(!q.empty()){
    TreeNode* node=q.front().first;
    int vertical=q.front().second.first;
    int level=q.front().second.second;
    q.pop();
    m[vertical][level].insert(node->val);
    if(node->left){
        q.push({node->left,{vertical-1,level+1}});
    }
    if(node->right){
        q.push({node->right,{vertical+1,level+1}});
    }
    }
    for(auto it:m){
    vector<int>temp;
    for(auto itr:it.second){
    temp.insert(temp.end(),itr.second.begin(),itr.second.end());      
    }
    res.push_back(temp);
    }
    return res;
    }
};
