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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        stack<int> s;
        ListNode* temp = head;
        int i = 0;
        while(temp != nullptr) {
            i ++;
            if(i >= left && i <= right) {
                s.push(temp -> val);
            }
            temp = temp -> next;
        }

        i = 0;
        temp = head;
        while(temp != nullptr) {
            i ++;
            if(i >= left && i <= right) {
                temp -> val = s.top();
                s.pop();
            }
            temp = temp -> next;
        }

        return head;
    } 
};