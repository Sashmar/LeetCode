class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> a = nums;

        for(int i = 0 ; i < nums.size() ; i++) {
            nums[(i + k) % nums.size()] = a[i];
        }
    }
};