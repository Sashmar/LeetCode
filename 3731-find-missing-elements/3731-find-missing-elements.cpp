class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> a;
        int start = nums[0];
        start++;
        int i = 1;
        while(i < nums.size()) {
            if(start != nums[i]) {
                a.push_back(start);
            }
            else i++;
            start++;
        }
        return a;
    }
};