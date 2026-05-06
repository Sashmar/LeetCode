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
    int getDecimalValue(ListNode* head) {
        ListNode* l1 = head;
        string num = "";
        while(l1 != nullptr) {
            num += (l1 -> val + '0');
            l1 = l1 -> next;
        }

        int a = stoi(num, nullptr, 2);
        return a;
    }
};