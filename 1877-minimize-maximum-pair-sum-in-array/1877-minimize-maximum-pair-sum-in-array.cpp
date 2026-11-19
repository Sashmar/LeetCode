class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int m = 0;

        for(int i = 0 ; i < nums.size() ; i ++) {
            int sum = nums[i] + nums[nums.size() - 1 - i];
            m = max(m, sum); 
        }


        return m;
    }
};