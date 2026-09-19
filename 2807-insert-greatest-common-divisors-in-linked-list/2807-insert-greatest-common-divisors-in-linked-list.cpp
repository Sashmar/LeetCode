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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;
        ListNode dummy(0);
        ListNode* curr = &dummy;
        ListNode* temp = head;
        ListNode* n = head -> next;
        while(n != nullptr) {
            curr -> next = new ListNode(temp -> val);
            curr = curr -> next;
            curr -> next = new ListNode(gcd(temp -> val, n -> val));
            curr = curr -> next;
            temp = temp -> next;
            n = n -> next;
        }

        curr -> next = new ListNode(temp -> val);

        return dummy.next;
        
    }
};