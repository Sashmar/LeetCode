class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int> nums2;
        vector<int> nums3;

        for(int i = 0 ; i < nums1.size() ; i ++) {
            for(int j = 0; j < nums1.size() ; j ++) {
                if(nums1[i] % 2 != 0) {
                    nums2.push_back(nums1[i]);
                    break;
                }

                else if(((nums1[i] - nums1[j]) % 2 != 0) && (j != i)) {
                    nums2.push_back(nums1[i] - nums1[j]);
                    break;
                }
            }
        }
            
        for(int i = 0 ; i < nums1.size() ; i ++) {
            for(int j = 0; j < nums1.size() ; j ++) {
                if(nums1[i] % 2 == 0) {
                    nums3.push_back(nums1[i]);
                    break;
                }

                else if(((nums1[i] - nums1[j]) % 2 == 0) && (j != i)) {
                    nums3.push_back(nums1[i] - nums1[j]);
                    break;
                }
            }
        }

        if(nums2.size() == nums1.size() || nums3.size() == nums1.size()) return true;
        else return false;
    }
};