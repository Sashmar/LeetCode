class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>> mtrix(0, vector<int>(2));

        unordered_map<int, int> a;

        unordered_map<int, int> b;

        for(int i = 0 ; i < matches.size() ; i ++) {
            a[matches[i][1]] ++;
            b[matches[i][0]] ++;
        }

        vector<int> s;
        vector<int> t;

        for(auto &[key, value]: a) {
            if(value == 1) s.push_back(key);
        }

        for(auto &[key, value]: b) {
            if(!a.count(key)) t.push_back(key); 
        }

        sort(s.begin(), s.end());

        sort(t.begin(), t.end());

        mtrix.push_back(t);
        mtrix.push_back(s);

        return mtrix;



    }
};