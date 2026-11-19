class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int i = 0;
        int left = i + 1;
        int sum = 0;
        while(i < nums.size() - 1) {
            bitset<32> b1(nums[i]);
            bitset<32> b2(nums[left]);
            sum += (b1 ^ b2).count();
            left ++;
            if(left == nums.size()) {
                i ++;
                left = i + 1;
            }
        }

        return sum;
    }
};