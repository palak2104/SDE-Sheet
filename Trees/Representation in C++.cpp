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
int main()
{
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(7);
    root->left->left=new Node(3);
    root->left->right=new Node(4);
    root->left->right->left=new Node(5);
    root->left->right->right=new Node(6);
    vector<int>res=levelOrder(root);
    return 0;
}
