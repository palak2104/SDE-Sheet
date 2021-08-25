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
    
    if(lh==-1 || rh==-1 || abs(lh-rh)>1)
    return -1;
    
    return 1+max(lh,rh);
    
}

int main()
{
    Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(6);
    root->right->left->left=new Node(5);
   if(height(root)==-1){
       cout<<"Tree is not Balenced";
   }
   else  cout<<"Tree is Balenced";
    return 0;
}



