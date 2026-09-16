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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp = head;
        vector<int> less;
        vector<int> gr;
        while(temp != nullptr) {
            if(temp -> val < x) {
                less.push_back(temp-> val);
            }
            else gr.push_back(temp -> val);
            temp = temp -> next;
        }
        temp = head;
        for(int num: less) {
            temp -> val = num;
            temp = temp -> next;
        }

        for(int num: gr) {
            temp -> val = num;
            temp = temp -> next;
        }

        return head;
    }
};