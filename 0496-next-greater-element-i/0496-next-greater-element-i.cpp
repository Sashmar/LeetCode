class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        for(int i = 0 ; i < nums1.size() ; i ++) {
            int m = INT_MIN;
            int j = 0;
            for(j = 0 ; j < nums2.size() ; j ++) {
                if(nums1[i] == nums2[j]) break;
            }
            for(int k = j + 1; k < nums2.size() ; k ++) {
                if(nums2[k] > nums2[j]) {
                    m = nums2[k];
                    break;
                }
            }
            if(m == INT_MIN) a.push_back(-1);
            else a.push_back(m);
        }

        return a;
    }
};