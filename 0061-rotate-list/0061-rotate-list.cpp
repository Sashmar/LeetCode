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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head -> next == nullptr) return head;

        ListNode* temp = head;
        vector<int> a;
        int count = 0;
        while(temp != nullptr) {
            count ++;
            a.push_back(temp-> val);
            temp = temp -> next;
        }

        count  = k % count;

        if (k == 0) return head;

        rotate(a.begin(), a.end() - count , a.end());
        temp = head;
        for(int num: a) {
            temp -> val = num;
            temp = temp-> next;
        }
        return head;
    }
};