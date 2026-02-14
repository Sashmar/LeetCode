class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = INT_MAX;
        int profit = 0 ;
        int mp = 0;
        for(int i = 0 ; i < prices.size() ; i++ ) {
            m = min(m, prices[i]);
            profit = prices[i] - m;
            mp = max(mp, profit);
        }

        return mp;


    }
};