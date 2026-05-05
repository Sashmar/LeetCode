class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> la;
        vector<int> ra(nums.size());
        int ls = 0;
        int rs = 0;
        la.push_back(ls);
        for(int i = 0 ; i < nums.size() - 1; i ++) {
            ls += nums[i];
            la.push_back(ls);
        }
        int j = nums.size() - 2;
        ra[nums.size()-1] = rs;
        for(int i = nums.size()- 1; i >= 1; i --) {
            rs += nums[i];
            ra[j] = rs;
            j--;
        }

        for(int i = 0 ; i < nums.size() ; i++) {
            nums[i] = abs(la[i] - ra[i]);
        }
        return nums;
    }
};