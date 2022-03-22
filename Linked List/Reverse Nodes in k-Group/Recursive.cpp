/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    void reverse(ListNode* s,ListNode* e){
        ListNode* p=NULL;
        ListNode* c=s;
        ListNode* n=s->next;
        while(p!=e){
            c->next=p;
            p=c;
            c=n;
            if(n) n=n->next;
        }
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || !head->next || k==1)
        return head;
        ListNode* s=head;
        ListNode* e=head;
        int count=k-1;
        while(count--){
         e=e->next;
         if(e==NULL) return head;
        }
        ListNode* nh=reverseKGroup(e->next,k);
        reverse(s,e);
        s->next=nh;
        return e;
    }
};
//https://leetcode.com/problems/reverse-nodes-in-k-group/
