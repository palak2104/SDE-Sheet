class cmp{
    public:
    bool operator() (ListNode* a,ListNode* b){
        return (a->val>b->val);
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      ListNode* dummy=new ListNode(-1);
      ListNode* tail=dummy;
      priority_queue<ListNode*,vector<ListNode*>,cmp>pq;
     for(auto it:lists){
         if(it) pq.push(it);
     }
     while(pq.size()){
         ListNode* temp=pq.top();
         pq.pop();
         tail->next=temp;
         tail=temp;
         if(temp->next)
         pq.push(temp->next);
     }
    return dummy->next;
    }
};
//https://leetcode.com/problems/merge-k-sorted-lists/
