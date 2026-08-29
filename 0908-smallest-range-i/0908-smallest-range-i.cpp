class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        nums[0] += k;
        nums[nums.size()- 1] -= k;
        int val = nums[nums.size() - 1] - nums[0];
        if(val < 0) return 0;
        else return val;
    }
};