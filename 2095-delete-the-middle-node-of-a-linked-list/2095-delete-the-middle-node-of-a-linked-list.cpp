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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode* temp = head;
        int count = 0;
        while(temp != nullptr) {
            count++;
            temp = temp -> next;
        }

        int n = count / 2;
        temp = head;
        count = 0;
        ListNode* prev = nullptr;
        while(temp != nullptr) {
            if(count == n) break;
            count ++;
            prev = temp;
            temp = temp -> next;
        }

        prev -> next = temp -> next;
        return head;
    }
};