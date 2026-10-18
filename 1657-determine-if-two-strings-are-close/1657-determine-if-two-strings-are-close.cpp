class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;

        for(int i = 0 ; i < word1.size() ; i ++) map1[word1[i]] ++;
        for(int i = 0 ; i < word2.size() ; i ++) map2[word2[i]] ++;

        if(map1.size() != map2.size()) return false;
        for (auto const& [key, val] : map1) {
            if (map2.find(key) == map2.end()) return false;
        }

        vector<pair<char, int>> vec1(map1.begin(), map1.end());

        sort(vec1.begin(), vec1.end(), [](const auto& pair1, const auto& pair2) {
            return pair1.second < pair2.second;
        });

        vector<pair<char, int>> vec2(map2.begin(), map2.end());

        sort(vec2.begin(), vec2.end(), [](const auto& pair1, const auto& pair2) {
            return pair1.second < pair2.second;
        });

        for(size_t i = 0 ; i < vec1.size() ; i ++) {
            if(vec1[i].second != vec2[i].second) return false;
        }

        return true;

    }
};