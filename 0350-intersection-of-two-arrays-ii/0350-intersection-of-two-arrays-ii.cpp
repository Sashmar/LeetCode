class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        for(int i = 0 ; i < nums1.size() ; i++) {
            int n = nums1[i];
            for(int j = 0 ; j < nums2.size() ; j++) {
                if(n == nums2[j]) {
                    a.push_back(n);
                    nums2[j] = -32648;
                    break;
                }
            }
        }

        return a;
    }
};