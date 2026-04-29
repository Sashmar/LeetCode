class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        for(int i = 0 ; i < nums1.size() ; i ++) {
            bool f1 = find(begin(nums2), end(nums2), nums1[i]) != end(nums2);
            bool f2 = find(begin(a), end(a), nums1[i]) != end(a);
            if(f1 == 1 && f2 == 0) a.push_back(nums1[i]);
        }

        return a;
    }
};