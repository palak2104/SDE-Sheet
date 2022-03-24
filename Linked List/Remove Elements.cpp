class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
ListNode *prev=NULL,*temp=head;
while(temp){
    if(temp->val==val) {
       if(prev==NULL){
           ListNode *ntemp=temp; 
           temp=temp->next;
           head=temp;
           delete ntemp; 
       }
    else{
        ListNode* ntemp=temp;
        prev->next=temp->next; 
        temp=temp->next; 
        delete ntemp; 
    }
    }
    else{
        prev=temp;
        temp=temp->next; 
    }
}
   return head;      
    }
};
