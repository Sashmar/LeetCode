class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> a;
        for(int i = 0 ; i < nums.size() ; i ++) {
            string b = to_string(nums[i]);
            for(int j = 0; j < b.size(); j ++) {
                int c = b[j] - '0';
                a.push_back(c);
            }
        }
        return a;
    }
};