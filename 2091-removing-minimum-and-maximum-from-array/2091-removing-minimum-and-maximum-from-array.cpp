class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        if(nums.size() <= 1) return 1;
        int n = nums.size() - 1;

        auto a = max_element(nums.begin(), nums.end());

        int max_index = distance(nums.begin(), a);

        auto b = min_element(nums.begin(), nums.end());

        int min_index = distance(nums.begin(), b);

        int maxmin = -1;

        int minmin = -1;

        if(min_index <= n - min_index && max_index <= n - max_index) {
            if(min_index > max_index) return min_index + 1;
            else return max_index + 1;
        }
        else if(min_index > n - min_index && max_index > n - max_index) {
            if(min_index > max_index) return n - max_index + 1;
            else return n - min_index + 1;
        }

        else {
            if(min_index > n - min_index) minmin = n - min_index;
            else minmin = min_index;

            if(max_index > n - max_index) maxmin = n - max_index;
            else maxmin = max_index;

            int split_sides = minmin + maxmin + 2;
            int left_only = max(min_index, max_index) + 1;
            int right_only = n - min(min_index, max_index) + 1;

            return min({split_sides, left_only, right_only});

        }

    }
};