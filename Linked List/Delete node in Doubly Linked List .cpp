class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      Node* temp=head_ref;
      if(x==1){
          head_ref=temp->next;
          delete temp;
          return head_ref;
      }
      int count=1;
      while(count<x){
          count++;
          temp=temp->next;
      }
      if(temp->next==NULL){
          temp->prev->next=NULL;
          delete temp;
          return head_ref;
      }
      temp->prev->next=temp->next;
      temp->next->prev=temp->prev;
      delete temp;
      return head_ref;
    }
};
//Problem Link: https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1/#
