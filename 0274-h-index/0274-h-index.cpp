class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());

        vector<int> a;
        int k = 1;
        for(int i = 0 ; i < citations.size(); i ++) {
            int sum = 0;
            for(int i = 0 ; i < citations.size(); i ++) {
                if(citations[i] <= 0) continue;
                else if(citations[i] >= k) sum ++;
            }

            a.push_back(sum);
            k ++;
        }
        int m = 0;
        int h = 0;

        for(int i = 0 ; i < a.size() ; i ++) {
            if(i + 1 <= a[i]) h = i + 1;
        }

        return h;
    }
};