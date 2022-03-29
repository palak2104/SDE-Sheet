#include <bits/stdc++.h>

using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<n;i++){
        Node* node=new Node(arr[i]);
        node->prev=temp;
        temp->next=node;
        temp=node;
    }
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
