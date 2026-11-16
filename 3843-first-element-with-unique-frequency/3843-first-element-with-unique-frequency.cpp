class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> m;
        unordered_map<int, int> m2;
        vector<int> order;

        for(int i = 0 ; i < nums.size() ; i ++) {
            m[nums[i]] ++;
            if(m[nums[i]] == 1) order.push_back(nums[i]);
        }

        for(const auto& s: m) {
            m2[s.second] ++;
        }

        for(int i = 0 ; i < order.size() ; i ++) {
            int v = m[order[i]];

            if(m2[v] == 1) return order[i];
        }


        return -1;
        
    }
};