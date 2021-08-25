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
int height(Node* node){
    if(node==NULL)
    return 0;
    
    return 1+max(height(node->left),height(node->right));
    
}

int main()
{
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(6);
    root->right->left->left=new Node(5);
    cout<<"Height is "<<height(root);
    return 0;
}



