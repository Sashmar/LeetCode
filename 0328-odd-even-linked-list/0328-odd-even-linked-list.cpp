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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        if(head == nullptr) return dummy -> next;
        ListNode* h1 = dummy;
        ListNode* h2 = head;
        while(h2 != nullptr) {
            h1 -> next = new ListNode(h2 -> val);
            h1 = h1 -> next;
            h2 = h2 -> next;
            if(h2 != nullptr) h2 = h2 -> next;
        }

        h2 = head -> next;
        while(h2 != nullptr) {
            h1 -> next = new ListNode(h2 -> val);
            h1 = h1 -> next;
            h2= h2 -> next;
            if(h2 != nullptr) h2 = h2 -> next;
        }

        ListNode* result = dummy-> next;
        return result;
    }
};