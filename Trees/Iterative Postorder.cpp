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
 vector<int> Preorder(Node* root)
    {
    vector<int>ans;
    if(root==NULL)
    return ans;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* node=st.top();
        st.pop();
        ans.push_back(node->data);
        if(node->left!=NULL)
        st.push(node->left);
        if(node->right!=NULL)
        st.push(node->right);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
int main()
{
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(7);
    root->left->left=new Node(3);
    root->left->right=new Node(4);
    root->left->right->left=new Node(5);
    root->left->right->right=new Node(6);
    vector<int>res=Preorder(root);
    for(auto it:res)
    cout<<it<<" ";
    return 0;
}

