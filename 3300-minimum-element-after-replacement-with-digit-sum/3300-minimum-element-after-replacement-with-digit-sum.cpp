class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> a;
        for(int i = 0 ; i < nums.size() ; i ++) {
            int sum = 0;
            while(nums[i] > 0) {
                sum += (nums[i] % 10);
                nums[i] /= 10;
            }
            a.push_back(sum);
        }

        int m = a[0];
        for(int i = 1 ; i < a.size() ; i ++) {
            if(m > a[i]) m = a[i];
        }

        return m;
    }
};