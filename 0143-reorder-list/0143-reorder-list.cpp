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
    void reorderList(ListNode* head) {
        int i = 0 ;
        vector<int> a;
        ListNode* curr = head;
        while(curr != nullptr) {
            a.push_back(curr -> val);
            curr = curr -> next;
        } 
        int j = a.size() - 1;

        curr = head;
        int b = 0;
        while(i <= j) {
            if(b % 2 == 0) {
                curr -> val = a[i];
                i++;
            }

            else {
                curr -> val = a[j];
                j--;
            }
            curr = curr -> next;
            b++;
        }

    }
};