class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> a;
        for(int i = 0 ; i< nums.size() ; i ++) a[nums[i]] ++;

        int count = 0;
        for(const auto& num : a) {

            if(num.second == 1) return -1;

            if(num.second % 3 == 0) {
                count += num.second / 3;
            }

            else {
                int count1 = (num.second % 2 == 0)? num.second / 2 : INT_MAX;
                int b = num.second / 3;
                int c = INT_MAX;
                for(int i = 3 * b ; i >= 3 ; i -= 3) {
                    int diff = num.second - i;


                    if(diff % 2 == 0) {
                        c = (i / 3) + (diff / 2);
                        break; 
                    }
                }

                count += min(count1, c);
            }
        }


        return count;
    }
};