#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
 vector<vector<int>> Traversal(Node* root)
{
 vector<vector<int>>ans;
 vector<int>preorder;
 vector<int>inorder;
 vector<int>postorder;
 stack<pair<Node*,int>>st;
 st.push({root,1});
 while(!st.empty()) {
            auto it = st.top(); 
            st.pop(); 

            if(it.second == 1) {
                preorder.push_back(it.first->data); 
                it.second++; 
                st.push(it); 

                if(it.first->left != NULL) {
                    st.push({it.first->left, 1}); 
                }
            }
            else if(it.second == 2) {
                inorder.push_back(it.first->data); 
                it.second++; 
                st.push(it); 

                if(it.first->right != NULL) {
                    st.push({it.first->right, 1}); 
                }
            }
            else {
                postorder.push_back(it.first->data); 
            }
        } 
     ans.push_back(preorder);
     ans.push_back(inorder);
     ans.push_back(postorder);
     return ans;
 }

int main()
{
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(3);
    root->left->right=new Node(4);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    vector<vector<int>>res=Traversal(root);
    int i=1;
    for(auto j:res){
        if(i==1) cout<<"Preorder Traversal -> ";
        if(i==2) cout<<"Inorder Traversal -> ";
        if(i==3) cout<<"Postorder Traversal -> ";
      for(auto it:j)
      cout<<it<<" ";
      cout<<endl;
      i++;
    }
    
    return 0;
}


