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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr) return head;
        else if(head->next == nullptr) return head;

        set<int> s;
        ListNode* temp = head;
        ListNode* n = head -> next;

        while(n != nullptr) {
            if(temp-> val == n -> val) {
                s.insert(temp -> val);
                n = n -> next;
                temp -> next = n;

            }
            else {
                temp = temp -> next;
                n = n -> next;
            }
        }

        temp = head;
        ListNode* prev = nullptr;
        while(temp != nullptr) {
            if(s.contains(temp->val)) {
                if(temp == head) {
                    head = head -> next;
                    temp = head;
                }
                else {
                    prev -> next = temp -> next;
                    temp = temp -> next;
                }
            }
            else {
                prev = temp;
                temp = temp-> next;
            }
        }

        return head;
    }
};