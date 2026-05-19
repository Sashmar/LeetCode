class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0 ; i < nums1.size(); i ++) {
            if(nums1[i] < nums2[0]) continue;
            else {
                int target = nums1[i];
                auto it = find(nums2.begin(), nums2.end(), target);
                if(it != nums2.end()) return target;
            }
        }

        return -1;
    }
};