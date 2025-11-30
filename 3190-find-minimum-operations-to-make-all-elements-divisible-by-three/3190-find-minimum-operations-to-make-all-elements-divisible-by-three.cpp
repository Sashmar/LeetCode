class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count  = 0;
        for(int i = 0 ; i< nums.size() ; i++) {
            int a = nums[i] % 3;
            if(a == 2 ) count++;
            else count += a;
        }

        return count;
    }
};