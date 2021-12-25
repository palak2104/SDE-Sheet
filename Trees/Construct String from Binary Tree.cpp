class Solution {
    void buildStr(TreeNode* root,string &str){
        string c=to_string(root->val);
        str+=c;
        if(!root->left and root->right){
            str+="()";
            str.push_back('(');
            buildStr(root->right,str);
            str.push_back(')');
        }
        else {
        if(root->left){
            str.push_back('(');
            buildStr(root->left,str);
            str.push_back(')');
        }
        if(root->right){
            str.push_back('(');
            buildStr(root->right,str);
            str.push_back(')');
        }
        }
       return; 
    }
public:
    string tree2str(TreeNode* root) {
      string str="";
      buildStr(root,str);  
      return str;
    }
};
