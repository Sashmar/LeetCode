class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        n *= 2;
        vector<int> a;
        int v = 0;
        int j = 0;
        for(int i = 0 ; i < nums.size() ; i++) {
            a.push_back(nums[i]);
            if((i == nums.size()-1) && v == 0) {
                i = -1;
                v =1;
            }
        } 

        return a;
    }
};