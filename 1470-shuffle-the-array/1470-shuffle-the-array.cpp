class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        int j = n;
        int i = 0 ;
        while ( i < (nums.size() - n) && j < nums.size()) {
            a.push_back(nums[i]);
            a.push_back(nums[j]);
            i++;
            j++;
        }

        while(i < (nums.size() - n)) {
            a.push_back(nums[i]);
            i++;
        }

        while(j < nums.size()-1) {
            a.push_back(nums[j]);
            j++;
        }

        return a;
    }
};