class Solution {
    ListNode* reverse(ListNode* head){
        ListNode* p=NULL;
        ListNode* c=head;
        ListNode* n=head->next;
        while(c!=NULL){
          n=c->next;
          c->next=p;
          p=c;
          c=n;
        }
        return p;
    
    }
    void print(ListNode* head){
        while(head){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* slow=head,*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        print(head);
        ListNode* mid=slow->next, *start= head;
        while(mid!=NULL){
            if(mid->val != start->val) return false;
            mid=mid->next;
            start=start->next;
        }
        slow->next=reverse(slow->next);
        print(head);
        return true;
    }
};
//https://leetcode.com/problems/palindrome-linked-list/
