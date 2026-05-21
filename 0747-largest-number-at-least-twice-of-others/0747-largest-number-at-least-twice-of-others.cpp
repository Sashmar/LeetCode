class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ind = 0;
        int m = *max_element(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size(); i++) {
            if(m == nums[i]) {
                ind = i;
                break;
            }
        }

        for(int i = 0 ; i < nums.size(); i ++) {
            if(m >= nums[i] * 2 || ind == i) continue;
            else return -1;
        }

        return ind;
    }
};