class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(), nums.end());
    	int c = 0;
        for(int i = 0 ; i < nums.size() - 1; i ++) {
            if(nums[i] == nums[i + 1]) c = 1;
            else if(nums[i] != nums[i + 1] && c == 0) sum += nums[i];
            else if(nums[i] != nums[i+1] && c == 1) c = 0;
        }  
        if(c == 0) sum += nums[nums.size() -1];
        return sum;
    }
};