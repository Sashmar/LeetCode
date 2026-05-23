class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> a;
        for(int i = 0 ; i < nums.size() ; i++) a.push_back(nums[i]);
        sort(a.begin(), a.end());
        if(nums == a) return true;
        int n = nums.size();
        int count = 0;
        for(int i = 0 ; i < nums.size() ; i ++) {
            if(nums[i] > nums[(i+1) % n]) count ++;
            if(count > 1) return false;
        }
        return true;
    }
};