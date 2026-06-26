class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc = 0;
        int dec = 0;
        for(int i = 1 ; i < nums.size() ; i++) {
            if(nums[i] > nums[i - 1] && dec == 0) inc ++;
            else if(nums[i] < nums[i - 1] && inc == 0) dec ++;
            else if(nums[i] > nums[i - 1] && dec != 0) return false;
            else if(nums[i] < nums[i - 1] && inc != 0) return false;
        }   
        return true;
    }
};