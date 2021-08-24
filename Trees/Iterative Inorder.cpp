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
 vector<int> Inorder(Node* root)
    {
    stack<Node*>st;
    vector<int>res;
    Node* node=root;
    while(true){
        if(node!=NULL){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty())
            break;
            node=st.top();
            st.pop();
            res.push_back(node->data);
            node=node->right;
            
        }
    }
    return res;
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
    vector<int>res=Inorder(root);
    for(auto it:res)
    cout<<it<<" ";
    return 0;
}

