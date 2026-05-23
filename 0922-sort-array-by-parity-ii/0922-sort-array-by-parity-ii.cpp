class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> a;
        for(int i = 0 ; i < nums.size(); i++) {
            if(nums[i] % 2 == 0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        int b = 0;
        int c = 0;
        for(int i = 0 ; i < nums.size() ; i ++) {
            if(i % 2 == 0) {
                a.push_back(even[b]);
                b++;
            }
            else {
                a.push_back(odd[c]);
                c++;
            }
        }

        return a;
    }
};