class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = 1;
        for(int i = 0 ; i < nums.size() ; i ++) {
            if(nums[i] <= 0) continue;
            else if(nums[i] != a) return a;
            else if(i + 1 < nums.size() && nums[i] == nums[i+1]) a= a;
            else a++;
        }

        return a;
    }
};