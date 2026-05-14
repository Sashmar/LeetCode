class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[nums.size() - 1] != nums.size() - 1 || nums[nums.size() - 2] != nums.size() - 1) return false;
        int a = 1;
        for(int i = 0 ; i < nums.size() - 2 ; i++) {
            if(nums[i] != a) return false;
            a++;
        }

        return true;
    }
};