class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> a(2);
        sort(nums.begin(), nums.end());
        unordered_map<int,int> m;
        for(int i : nums) {
            m[i]++;
        }


        for(int i = 1 ; i<= nums.size() ; i++) {
            if(m[i] >=2) {
                a[0] = i;
            }

            if(m[i] == 0) a[1] = i;
        }

    
        return a;

        

    }


};