class Solution {
public:

    unordered_map<int, int> map;

    int findSum(int a) {
        int c  = a;
        int sum = 0;
        auto it = map.find(a);
        if(it != map.end()) return it -> second;
        while(a > 0) {
            sum += a % 10;
            a = a / 10;
        }

        map[c] = sum; 

        return sum;

    }
    int minSwaps(vector<int>& nums) {
        int s = 0;
        vector<pair<int, int>> p;

        for(int i = 0 ; i < nums.size() ; i ++) {
            int b = findSum(nums[i]);
            p.push_back({nums[i], b});
        }

        sort(p.begin(), p.end(), [](const auto& pair1, const auto& pair2) {
            if(pair1.second == pair2.second) return pair1.first < pair2.first;
            return pair1.second < pair2.second;
        });

        unordered_map<int, int> map;

        for(int i = 0 ; i < nums.size(); i ++) map[nums[i]] = i;

        for(size_t i = 0 ; i < p.size() ; i ++) {
            int target = p[i].first;

            if(nums[i] != target) {
                s ++;

                int ind = map[target];

                map[nums[i]] = ind;
                map[target] = i;

                swap(nums[i], nums[ind]);
            }
        }

        return s;
    }
};