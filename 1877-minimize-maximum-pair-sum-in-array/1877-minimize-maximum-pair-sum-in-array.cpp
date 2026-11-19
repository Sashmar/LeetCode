class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int m = 0;
        int n = nums.size() - 1;

        for(int i = 0 ; i < nums.size() ; i ++) {
            int sum = nums[i] + nums[n - i];
            m = max(m, sum); 
        }


        return m;
    }
};