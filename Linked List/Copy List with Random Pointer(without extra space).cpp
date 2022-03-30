class Solution {
public:
    Node* copyRandomList(Node* head) {
      Node* temp=head;
      while(temp){
          int data=temp->val;
          Node* node=new Node(data);
          Node* a=temp->next;
          temp->next=node;
          node->next=a;
          temp=a;
      }
      temp=head;
      while(temp){
        Node* node=temp->next;
        Node* r=temp->random;
        if(node && r)
        node->random=r->next;
        temp=node->next;
      }
      Node* dummy=new Node(-1);
      Node* tail=dummy;
      temp=head;
      while(temp){
          tail->next=temp->next;
          tail=tail->next;
          temp->next=tail->next;
          temp=temp->next;
      }
      return dummy->next;
    }
};
