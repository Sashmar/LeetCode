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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> a;
        ListNode* h = head;
        while(h != nullptr) {
            a.push_back(h -> val);
            h = h -> next;
        }
        vector<int> ans;

        for(int i = 0 ; i < a.size() ; i ++) {
            int m = -1;
            for(int j = i + 1 ; j < a.size() ; j ++) {
                if(a[i] < a[j]) {
                    ans.push_back(a[j]);
                    m = 0;
                    break;
                } 
            }
            if(m == -1) ans.push_back(0);
        }


        return ans;
    }
};