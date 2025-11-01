class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> a;
        for(int i = 0 ; i < nums.size(); i ++) {
            int b = nums[i];
            for(int j = i +1 ; j < nums.size() ; j ++) {
                if(b == nums[j]) {
                    a.push_back(b);
                    break;
                } 
            }
        }

        return a;
    }
};