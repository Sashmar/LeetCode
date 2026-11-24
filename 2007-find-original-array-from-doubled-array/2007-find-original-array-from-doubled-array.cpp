class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        if (changed.size() % 2 != 0) return {};
        
        sort(changed.begin(), changed.end());
        vector<int> a;

        for (int i = 0; i < changed.size(); i++) {
            if (changed[i] == -1) continue; 

            auto it = find(changed.begin() + i + 1, changed.end(), 2 * changed[i]);
            
            if (it != changed.end()) {
                a.push_back(changed[i]);
                *it = -1;
            } else {
                return {};
            }
        }
        return a;
    }
};