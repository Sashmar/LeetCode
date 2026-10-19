class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> s;
        for(int i = 0 ; i < nums.size() ; i ++) {
            if(target == nums[i]) s.push_back(i);
            else if(target < nums[i]) break;
        }
        return s;
    }
};