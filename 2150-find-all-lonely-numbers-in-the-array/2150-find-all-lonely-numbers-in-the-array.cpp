class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> a;
        for(int i = 0 ; i < nums.size() ; i++) map[nums[i]] ++;

        sort(nums.begin(), nums.end());

        for(const auto& [key, value]: map) {
            if(value == 1) {
                if(!binary_search(nums.begin(), nums.end(), key + 1) && !binary_search(nums.begin(), nums.end(), key - 1)) a.push_back(key);
            }
        }

        return a;
    }
};