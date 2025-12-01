class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> a(nums.size());
        long long num = 0;
        for(int i = 0 ;i < nums.size(); i++){
            num = ((num << 1) | (nums[i])) % 5;
            if(num==0) a[i] = true;
            else a[i] = false;
        }
        return a;
    }
};