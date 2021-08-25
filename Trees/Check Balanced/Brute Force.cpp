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
    int lh= height(node->left);
    int rh= height(node->right);
    return 1+max(lh,rh);
}
bool isBalanced(Node* node){
    if(node==NULL)
    return true;
    
    if(abs(height(node->left)-height(node->right))>1)
    return false;
    if(!isBalanced(node->left)||!isBalanced(node->right))
    return false;
    return true;
}

int main()
{
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(6);
    root->right->left->left=new Node(5);
   if(!isBalanced(root)){
       cout<<"Tree is not Balanced";
   }
   else  cout<<"Tree is Balenced";
    return 0;
}



