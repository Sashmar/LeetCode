class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size(); i++) {
            int c = 2;
            int is = nums[i] + 1;
            for(int j = 2 ; j < nums[i] ; j++) {
                if(nums[i] % j == 0) {
                    is += j;
                    c++;
                }
                if(c > 4) break;
            }

            if(c == 4) sum += is;
        }

        return sum;
    }
};