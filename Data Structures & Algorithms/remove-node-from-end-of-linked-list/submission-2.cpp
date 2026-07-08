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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode *temp = &dummy, *del = &dummy;
        int m = n;
        while(m){
            temp = temp->next;
            m--;
        }
        while(temp->next){
            temp = temp->next;
            del = del->next;
        }
        if(del == &dummy){
            head = head -> next;
            return head;
        } 
        del->next = del->next->next;
        return head;
    }
};
