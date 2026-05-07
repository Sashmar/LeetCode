class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int n : nums) {
            int res = count(nums.begin(), nums.end(), n);
            if(res == 1) return n;
        }
        return -1;
    }
};