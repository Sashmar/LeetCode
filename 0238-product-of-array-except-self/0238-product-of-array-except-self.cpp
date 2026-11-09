class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> a;

        int c = count(nums.begin(), nums.end(), 0);

        if(c == nums.size()) {
            for(int i = 0 ; i < nums.size(); i ++) {
                a.push_back(0);
            }
            return a;
        }

        int mul = 1;
        int z = 0;
        for(int i = 0 ; i < nums.size() ; i ++) {
            if(nums[i] == 0) {
                z = 1;
                continue;
            }
            else mul *= nums[i];
        }

        if(z) {
            for(int i = 0 ; i < nums.size() ; i ++) {
                if(nums[i] == 0 && c - 1 >= 1) a.push_back(0);
                else if(nums[i] != 0 && c >= 1) a.push_back(0);
                else a.push_back(mul);
            }
        }

        else {
            for(int i = 0 ;  i < nums.size() ; i ++) {
                a.push_back(mul / nums[i]);
            }
        }

        return a;
    }
};