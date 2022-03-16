/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node->next;
        if(!temp) delete node;
        int x=temp->val;
        temp->val=node->val;
        node->val=x;
        node->next=temp->next;
        delete temp;
        return;
    }
};

//Problem Link: https://leetcode.com/problems/delete-node-in-a-linked-list/
