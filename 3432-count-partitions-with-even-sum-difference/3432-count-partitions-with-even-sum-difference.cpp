class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int i = 0 ; 
        int count = 0;
        int sum1 = 0;
        int sum2 = 0;

        sum1+= nums[0];
        for(int j = 1; j<nums.size() ; j++) sum2 += nums[j];
        if((sum1 - sum2) % 2 == 0) count++;
        i++;
        while(i < nums.size()-1) {
            sum1+=nums[i];
            sum2 -= nums[i];
            if((sum1 - sum2) % 2 == 0) count++;
            i++;
        }

        return count;
    }
};