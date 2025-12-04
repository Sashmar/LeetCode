class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> a(2);
        sort(nums.begin(), nums.end());
        unordered_map<int,int> m;
        for(int i : nums) {
            m[i]++;
        }
        int i =1;
        int j = 0;

        for(i = 1 ; i<= nums.size() ; i++) {
            if(m[i] >=2) {
                a[0] = i;
                j = i;
            }

            if(m[i] == 0) a[1] = i;
        }

        if (a.size() == 2) return a;
        if(m[1] == 0) a.push_back(1);
        else if(m[j-1]==0 && j !=1) a.push_back(j-1);
        else a.push_back(j+1);
        return a;

    }


};