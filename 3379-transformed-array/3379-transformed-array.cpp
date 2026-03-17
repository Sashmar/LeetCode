class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int j = 0 ;
        int t = 0;
        for(int i = 0 ; i < nums.size(); i++) {
            if(nums[i] > 0) j = (i + nums[i]) % nums.size();
            else if(nums[i] < 0) {
                t = i + nums[i];
                j = (t + nums.size() + nums.size() + nums.size() + nums.size()) % nums.size();
            }
            else j = i;
            result[i] = nums[j];
        }

        return result;
    }
};