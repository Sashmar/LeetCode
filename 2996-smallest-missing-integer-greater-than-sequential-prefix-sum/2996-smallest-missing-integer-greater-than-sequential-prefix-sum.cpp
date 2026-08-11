class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];

        for(int i = 1 ; i < nums.size() ; i ++) {
            if(nums[i] == (nums[i - 1] + 1)) sum += nums[i]; 
            else break;
        }

        sort(nums.begin(), nums.end());
        int n = nums.size() -1;
        int large = nums[n];
        while(true) {
            if(find(nums.begin(), nums.end(), sum) == nums.end()) return sum;
            else sum ++;
        }
        return -1;
    }
};