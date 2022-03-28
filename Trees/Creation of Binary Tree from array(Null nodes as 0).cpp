#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void inorder(Node* head){
    if(!head) return;
    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);
}
void postorder(Node* head){
    if(!head) return;
    postorder(head->left);
    postorder(head->right);
    cout<<head->data<<" ";
}
void preorder(Node* head){
    if(!head) return;
    cout<<head->data<<" ";
    preorder(head->left);
    preorder(head->right);
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr.begin(),arr.end());
    Node* head=new Node(arr[arr.size()-1]);
    queue<Node*>q;
    q.push(head);
    arr.pop_back();
    while(arr.size()>=2){
        int a=arr[arr.size()-1];
        arr.pop_back();
        int b=arr[arr.size()-1];
        arr.pop_back();
        Node* node=q.front();
        q.pop();
        if(a!=0){
        Node* leftn=new Node(a);
        node->left=leftn;
        q.push(leftn);
        }
        if(b!=0){
        Node* rightn=new Node(b);
        node->right=rightn;
        q.push(rightn);
        }
    }
    if(arr.size()==1){
    Node* node=q.front();    
    int a=arr[arr.size()-1];
    if(a!=0){
    arr.pop_back();
    Node* leftn=new Node(a);
    node->left=leftn;
    }
    }
    cout<<"Inorder traversal"<<endl;
    inorder(head);
    cout<<endl;
    cout<<"Prerder traversal"<<endl;
    preorder(head);
    cout<<endl;
    cout<<"Postorder traversal"<<endl;
    postorder(head);
    return 0;
}

