class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> final;
        unordered_map<string, int> a;
        for(int i = 0 ; i < words.size() ; i ++) {
            a[words[i]] ++;
        }

        vector<pair<string, int>> vec(a.begin(), a.end());

        sort(vec.begin(), vec.end(), [](const auto& pair1, const auto& pair2) {
            if(pair1.second == pair2.second) return pair1.first < pair2.first;
            return pair1.second > pair2.second;
        });

        for(size_t i = 0 ; i < k; i ++) {
            final.push_back(vec[i].first);
        }

        return final;
    }
};