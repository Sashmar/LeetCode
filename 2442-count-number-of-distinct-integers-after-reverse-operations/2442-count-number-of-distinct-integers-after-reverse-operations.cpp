class Solution {
public:

    int rev(int b) {
        int r = 0;
        while(b != 0) {
            r = r * 10 + (b % 10);
            b = b / 10;
        }

        return r;
    }

    int countDistinctIntegers(vector<int>& nums) {
        set<int> a;

        for(int i = 0 ; i < nums.size() ; i ++) {
            a.insert(nums[i]);
            a.insert(rev(nums[i]));
        }

        return a.size();
    }
};