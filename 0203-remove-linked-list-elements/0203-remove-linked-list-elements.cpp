class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node that points to the head
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            if (curr->val == val) {
                // Skip the current node
                prev->next = curr->next;
                
                // Optional but highly recommended: Free memory of deleted node
                ListNode* toDelete = curr;
                curr = curr->next;
                delete toDelete; 
            } else {
                // Move both pointers forward normally
                prev = curr;
                curr = curr->next;
            }
        }
        
        // Save the actual new head
        ListNode* newHead = dummy->next;
        
        // Free dummy node memory
        delete dummy; 
        
        return newHead;
    }
};
