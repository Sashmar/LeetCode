class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> a;
        for(int i = 0 ; i < nums.size() ; i++) map[nums[i]] ++;
        unordered_set<int> num_set(nums.begin(), nums.end());

        for(const auto& [key, value]: map) {
            if(value == 1) {
                if(num_set.count(key + 1) == 0 && num_set.count(key - 1) == 0) a.push_back(key);
            }
        }

        return a;
    }
};