class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        long long i = 1;
        while(i < 105) {
            if(find(nums.begin(), nums.end(), k * i) == nums.end()) return k * i;
            else {
                i ++;
            }
        }

        return -1;
    }
};