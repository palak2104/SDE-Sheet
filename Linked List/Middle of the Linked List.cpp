class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        int x=count/2;
        ListNode* node=head;
        for(int i=0;i<x;i++){
            node=node->next;
        }
        return node;
    }
};
//Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/
