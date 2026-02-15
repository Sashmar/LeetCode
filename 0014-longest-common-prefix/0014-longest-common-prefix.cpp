class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int m = min(first.size(), last.size());
        string ans = "";
        for(int i = 0 ; i < m ; i ++) {
            if(first[i] == last[i]) {
                ans += first[i];
            }
            else break;
        }
        return ans;
    }
};