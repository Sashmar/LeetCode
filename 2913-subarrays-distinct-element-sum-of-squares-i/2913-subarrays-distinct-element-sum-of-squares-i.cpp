class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        set<int> s;

        for(int i = 0 ; i < nums.size(); i ++) {
            for(int j = i ; j < nums.size() ; j ++) {
                s.insert(nums[j]);
                sum += (s.size() * s.size());
            }
            s.clear();
        }

        return sum;
    }
};