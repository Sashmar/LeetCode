class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int> a;
        for(int i = 0 ; i < nums.size() ; i++) map[nums[i]] ++;

        for(const auto& [key, value]: map) {
            if(value == 1) {
                if(map.find(key + 1) == map.end() && map.find(key - 1) == map.end()) a.push_back(key);
            }
        }

        return a;
    }
};