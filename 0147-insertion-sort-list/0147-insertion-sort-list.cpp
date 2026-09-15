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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp = head;

        vector<int> a;
        while(temp != nullptr) {
            a.push_back(temp-> val);
            temp = temp -> next;
        }
        sort(a.begin(), a.end());

        temp = head;
        for(int num: a) {
            temp -> val = num;
            temp = temp -> next;
        }

        return head;
    }
};