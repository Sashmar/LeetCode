class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size() / 2;
        // vector<int> a(n+1, 0);
        // for(int i = 0 ; i< )
        for(int i = 0 ; i < nums.size() ; i ++) {
            int count = 1;
            for(int j = i+ 1 ; j < nums.size() ; j ++) {
                if(nums[j] == nums[i]) count++;

                if(count == n) return nums[i];
            }
        }
        return -1;
    }
};