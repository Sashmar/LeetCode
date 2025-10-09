class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> m (nums1.size()+nums2.size());
        merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), m.begin());
        if(m.size() % 2 != 0) {
            int a = (int)m.size() /2;
            return (double)m[a];
        }
        else{
            int a = m.size() /2;
            return (double)(m[a-1] +m[a])/2;
        }
        return -1;
    }
};