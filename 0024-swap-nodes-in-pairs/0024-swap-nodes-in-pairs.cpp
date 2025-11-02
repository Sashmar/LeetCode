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
    ListNode* swapPairs(ListNode* head) {
        int temp = 0 ;
        if(head == nullptr) return head;
        ListNode* curr = head->next;
        ListNode* old = head ;
        while(curr != nullptr) {
            temp = curr->val;
            curr->val = old->val;
            old->val = temp;
            if(curr->next != nullptr && curr->next->next != nullptr) {
                old = old->next->next;
                curr = curr->next->next;
            }
            else break;
        }
        return head;
    }
};