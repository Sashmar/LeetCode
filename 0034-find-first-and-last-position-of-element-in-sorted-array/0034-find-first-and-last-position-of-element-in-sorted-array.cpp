class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a;

        auto it = lower_bound(nums.begin(), nums.end(), target);
        int ind = 0;

        if(it != nums.end() && *it == target) {
            ind = it - nums.begin();
            a.push_back(ind);
        }
        else return {-1, -1};

        auto it1 = lower_bound(nums.rbegin(), nums.rend(), target, greater<int>());

        if(it1 != nums.rend() && *it1 == target) {
            ind = it1.base() - nums.begin() - 1;
            a.push_back(ind);
        }

        return a;

        
    }
};