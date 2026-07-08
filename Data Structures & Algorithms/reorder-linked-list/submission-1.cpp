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
    void reorderList(ListNode* head) {
        // edge case
        if(head == nullptr || head -> next == nullptr) return ;
        
        // go to half of 2 4 6 8 , 2 4 6 8 10 
        
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        //break the list at slow head -> 2 4 null, temp -> 6 8 (10)
        
        ListNode *temp = slow -> next;
        slow -> next = nullptr;

        // reverse the half head -> 2 4 null , cur -> (10) 8 6
        
        ListNode* prev = nullptr;
        ListNode* cur = temp;
        temp = temp->next;

        while (temp != nullptr) {
            cur->next = prev;
            prev = cur;
            cur = temp;
            temp = temp->next;
        }
        cur->next = prev;

        // merge head -> 2 4 cur -> (10) 8 6
        // insert the second half to first half 2 8 4 6 , 2 10 4 8 6
        prev = head;
        while (cur && prev) {
            temp = prev->next;
            prev -> next = cur;
            cur = cur -> next;
            prev -> next -> next = temp;
            prev = temp;
        }
    }
};
