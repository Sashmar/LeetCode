class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.size() == 1) return 0;

        sort(nums.begin(), nums.end());

        int c = 0;

        for(int i = 0 ; i < nums.size() - 1 ; i ++) {
            if(nums[i] != nums[nums.size() - 1]) {
                c += abs(nums[nums.size() - 1] - nums[i]);
            }
        }

        return c;
    }
};