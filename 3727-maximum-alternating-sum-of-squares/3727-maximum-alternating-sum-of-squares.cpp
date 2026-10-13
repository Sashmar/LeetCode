class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum = 0;
        long long diff = 0;
        sort(nums.begin(), nums.end(), [](int a , int b) {
            return abs(a) < abs(b);
        });

        for(int i = 0 ; i < nums.size() / 2 ; i ++) {
            diff += (nums[i] * nums[i]);
        }

        for(int i = nums.size() / 2 ; i < nums.size() ; i ++) sum += (nums[i] * nums[i]);

        sum -= diff;
        return sum;
    }
};