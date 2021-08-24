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
 vector<int> levelOrder(Node* root)
    {
      //Your code here
      vector<int>ans;
        if(root==NULL)
            return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            //vector<int>level;
            int n=q.size();
            for(int i=0;i<n;i++){
               Node* node=q.front();
               q.pop();
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
                ans.push_back(node->data);
          }
        }
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
    vector<int>res=levelOrder(root);
    for(auto it:res)
    cout<<it<<" ";
    return 0;
}

    
