#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val=data;
    }
};
void makeTree(Node* node){
    cout<<"Enter the number of chlidren "<<node->val<<" will have"<<endl;
    int child;
    cin>>child;
    if(child==0){
        return;
    }
    else if(child==1){
        cout<<"Press l to make a left child or press r to make a right child"<<endl;
        char ch;
        cin>>ch;
        if(ch=='l'){
          cout<<"Enter Data for the left child of node "<<node->val<<endl;
          int d;
          cin>>d;
          node->left= new Node(d);
          makeTree(node->left);
      }
      else if(ch=='r'){
          cout<<"Enter Data for the right child of node "<<node->val<<endl;
          int d;
          cin>>d;
          node->right= new Node(d);
           makeTree(node->right);
      }
      else cout<<"Invalid input";
    }
    else if(child==2){
        cout<<"Enter Data for the left child of node "<<node->val<<endl;
          int l;
          cin>>l;
          node->left= new Node(l);
          makeTree(node->left);
         
        cout<<"Enter Data for the right child of node "<<node->val<<endl;
         int r;
         cin>>r;
         node->right= new Node(r);
         makeTree(node->right);  
        
    }
    return;
}
int height(Node* node, int &diametre){
    if(node==NULL)
    return 0;
    
    int lh=height(node->left,diametre);
    int rh=height(node->right,diametre);
    diametre=max(diametre,lh+rh);
    return 1+ max(lh,rh);
}
int main()
{
   cout<<"Enter the data of root node"<<endl;
   int r;
   cin>>r;
   Node* root= new Node(r);
   makeTree(root);
   int diametre=INT_MIN;
   height(root,diametre);
   cout<<"Diametre is "<<diametre;

    return 0;
}
