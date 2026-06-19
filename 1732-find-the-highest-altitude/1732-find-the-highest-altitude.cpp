class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int m = 0;
        int sum = 0;
        for(int i = 0 ; i < gain.size(); i ++) {
            sum += gain[i];
            m = max(m, sum);
        }

        return m;
    }
};