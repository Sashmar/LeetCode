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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int a = 0;
        int b = 0;
        ListNode* curr = head;
        while(curr != nullptr) {
            b++;
            curr = curr->next;
        }
        curr = head;
        ListNode* old = nullptr;
        b-=n;
        if(b == 0) return head->next;
        while(curr != nullptr) {
            if(a==b) {
                old->next = curr->next;
                break;
            }
            old = curr;
            curr = curr->next;
            a++;
        }

        return head;


    }
};