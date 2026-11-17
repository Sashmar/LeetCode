class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> a;

        for(int i = 0 ; i < nums.size() ; i ++) {
            m[nums[i]] ++;
            if(m[nums[i]] == 1) a.push_back(nums[i]); 
        }

        int j = 0;


        for(int i = 0 ; i < a.size() ; i ++) {
            if(m[a[i]] >= 2) {
                nums[j] = a[i];
                j ++;
                nums[j] = a[i];
            }

            else if(m[a[i]] == 1) nums[j] = a[i];
            j ++;
        }


        return j;
    }
};