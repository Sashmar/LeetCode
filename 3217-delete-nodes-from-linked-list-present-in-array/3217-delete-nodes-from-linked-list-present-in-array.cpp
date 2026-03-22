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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> m(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(0);
        ListNode* curr = head;
        ListNode* tail = dummy;
        while(curr != nullptr) {
            if(m.find(curr -> val) == m.end()) {
                tail -> next = new ListNode(curr->val);
                tail = tail -> next;
            }
            curr = curr -> next;
        }
        head = dummy -> next;
        return head;
    }
};