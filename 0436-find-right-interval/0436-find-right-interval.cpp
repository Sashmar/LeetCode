class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector<int> start;
        vector<int> end;
        for(int i = 0 ; i < intervals.size() ; i ++) {
            start.push_back(intervals[i][0]);
            end.push_back(intervals[i][1]);
        }

        vector<int> a;

        for(int i = 0 ; i < end.size() ; i ++) {
            int m = 32768;
            int ind = 0;
            for(int j = 0 ; j< start.size(); j ++) {
                if(end[i] <= start[j] && m > start[j]) {
                    m = start[j];
                    ind = j;
                }
            }

            if(m == 32768) ind = -1;
            a.push_back(ind);
        }

        return a;
    }
};