class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> a;
        if(nums.size() < 2) return a;
        sort(nums.begin(), nums.end());
        for(int i = 1 ; i < nums.size() ; i ++) {
            int target = nums[i];
            if(nums[i] == nums[i-1] && (find(a.begin(), a.end(), target) == a.end())) {
                a.push_back(nums[i]);
            }
        }

        return a;
    }
};