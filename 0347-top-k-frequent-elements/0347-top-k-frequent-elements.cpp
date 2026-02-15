class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> a;
        for(int i = 0 ; i < nums.size() ; i ++) {
            mp[nums[i]] ++;
        }

        vector<pair<int,int>> v(mp.begin(), mp.end());

        sort(v.begin(), v.end(), [](auto &a, auto&b){
            return a.second > b.second;
        });

        int i = 0;
        for(auto &p : v) {
            a.push_back(p.first);
            i++;
            if(i == k) break;
        }

        return a;
    }
};