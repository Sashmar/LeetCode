class Solution {
public:

    int findSum(int a) {
        int sum = 0;
        while(a > 0) {
            sum += a % 10;
            a = a/ 10;
        }
        return sum;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ; i < nums.size(); i++) {
            int sum = findSum(nums[i]);
            if(sum == i) return i;
        }
        return -1;
    }
};