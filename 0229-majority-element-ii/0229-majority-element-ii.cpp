class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> a;
        for(int i = 0 ; i < nums.size() ; i ++) {
            a[nums[i]] ++;
        }
        vector<int> r;
        for(auto const &[key, val] : a) {
            if(val > nums.size() / 3) r.push_back(key);
        } 
        return r;
    }
};