class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() ==1) return 0;
        else {
            int diff = 0;
            sort(nums.begin(), nums.end());
            for(int i = 1 ; i < nums.size() ; i ++) {
                int diff1 = nums[i] - nums[i-1];
                if(diff1 > diff ) diff = diff1;
            }
            return diff;
        }
        return -1;

    }
};