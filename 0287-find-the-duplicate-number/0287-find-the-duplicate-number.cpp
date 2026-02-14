class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> a(n, 0);
        for(int i = 0; i < nums.size() ; i ++) {
            if(a[nums[i]] == 0) a[nums[i]] ++;
            else return nums[i];
        }

        return -1;
    }
};