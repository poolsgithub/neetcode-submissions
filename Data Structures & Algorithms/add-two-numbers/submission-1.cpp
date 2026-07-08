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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1, *t2 = l2;
        int sum = 0, carry = 0;
        ListNode dummy(0);
        ListNode* cur = &dummy;
        while(t1||t2){
            int sum = carry;
            if(t1){
                sum += t1->val;
                t1 = t1->next;
            }
            if(t2){
                sum += t2->val;
                t2 = t2->next;
            }
            if(sum >= 10){
                carry = sum / 10;
                sum = sum % 10;
            }
            else{
                carry = 0;
            }
            ListNode* newNode = new ListNode(sum);
            cur -> next = newNode;
            cur = cur -> next;
        }
        if(carry){
            ListNode* newNode = new ListNode(carry);
            cur -> next = newNode;
        }
        return dummy.next;
    }
};
