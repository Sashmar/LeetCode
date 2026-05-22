class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = find(nums.begin(), nums.end(), target);
        if(it != nums.end()) {
            int ind = distance(nums.begin(), it);
            return ind;
        }
        return -1;
    }
};