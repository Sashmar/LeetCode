class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
            int count = 1 ;
            int i = 1;
            while(count < 3 && i < nums.size()) {
                if(nums[i - 1] == nums[i]) ;
                else count++;
                i ++;
            }
            if(count == 3) return nums[i - 1];
            else return nums[0];
        return -1;
    }
};