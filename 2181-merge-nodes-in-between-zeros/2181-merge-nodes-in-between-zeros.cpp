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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        int z = 0;
        ListNode dummy(0);
        ListNode* curr = &dummy;
        ListNode* temp = head;
        while(temp != nullptr) {
            if(temp -> val == 0 && z == 1) {
                curr -> next = new ListNode(sum);
                curr = curr -> next;
                sum = 0;
            }

            else if(temp -> val == 0 && z == 0) {
                z = 1;
            }

            else {
                sum += temp -> val;
            }
            temp = temp -> next;
        }

        return dummy.next;
    }
};