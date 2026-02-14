class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m =0;
        int mp = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            if(nums[i] == 1) m++;
            else {
                mp = max(mp, m);
                m =0;
            } 
        }

        return max(mp, m);
    }
};