class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        count--;
        temp=head;
        int res=0;
        while(temp){
          res+=temp->val*pow(2,count);
          count--;
          temp=temp->next;
        }
        return res;
    }
};

//Problem Link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
