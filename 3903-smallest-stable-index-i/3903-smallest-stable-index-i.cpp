class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int mi = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            auto max_it = max_element(nums.begin(), nums.begin() + (i+1));
            int ma = *max_it;
            auto min_it = min_element(nums.begin() + i, nums.end());
            mi = *min_it;
            if(ma - mi <= k) return i; 
        }

        return -1;
    }
};