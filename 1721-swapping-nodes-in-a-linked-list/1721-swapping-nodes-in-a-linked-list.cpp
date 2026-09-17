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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int length = 0;
        int num1 = 0;
        while(temp != nullptr) {
            length ++;
            if(length == k) num1 = temp -> val;
            temp = temp -> next; 
        }

        int count = 0;
        int num2 = 0;
        temp = head;
        while(temp != nullptr) {
            count ++;
            if(length - k + 1 == count) {
                num2 = temp -> val;
                temp -> val = num1;
                break;
            }
            temp = temp -> next;
        }
        count = 0;
        temp = head;

        while(temp != nullptr) {
            count ++;
            if(count == k) {
                temp -> val = num2;
                break;
            }

            temp = temp -> next;
        }

        return head;

    }
};