class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if(nums.size() == 1) return 0;

        sort(nums.begin(), nums.end());

        int mid = nums.size() / 2;
        int c = 0;

        for(int i = 0 ; i < nums.size() ; i ++) {
            if(nums[i] != nums[mid]) {
                c += abs(nums[i] - nums[mid]);
            }
        }

        return c;
    }
};