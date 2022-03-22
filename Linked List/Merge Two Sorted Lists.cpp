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
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i=list1;
        ListNode* j=list2;
        if(!i) return j;
        if(!j) return i;
       while(true){
           int flag=0;
           ListNode* i=list1;
           ListNode* j=list2;
           while(i){
               if(i->val>j->val){
                   swap(i->val,j->val);
                   flag=1;
                   break;
               }
               i=i->next;
           }
           if(flag==0) break;
           ListNode* temp=j->next;
           if(temp){
           while(j->val > temp->val){
               swap(j->val,temp->val);
               j=j->next;
               temp=temp->next;
               if(!temp) break;
           }
           }
       } 
       while(i->next!=NULL){
           i=i->next;
       }
       i->next=j;
       return list1;
    }
};
// https://leetcode.com/problems/merge-two-sorted-lists/
