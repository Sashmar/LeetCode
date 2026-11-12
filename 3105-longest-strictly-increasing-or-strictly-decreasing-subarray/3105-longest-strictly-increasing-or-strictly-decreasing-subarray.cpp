class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int check = 0 ;

        if(nums.size() == 1) return 1;

        bool a = all_of(begin(nums), end(nums), [&](int x) {
            return x == nums[0];
        });
        if(a) return 1;

        int dec = 0;
        int inc = 0;
        int count = 0;
        int c = 0;

        for(int i = 0 ; i < nums.size() - 1 ; i ++) {
            inc = 0;
            dec = 0;
            count = 0;
            int a = nums[i];
            int b = 0;
            for(int j = i + 1 ; j < nums.size() ; j ++) {
                b = nums[j];
                if(a < b && inc == 0 && dec == 0) {
                    inc = 1;
                    count +=2;
                }

                else if(a < b && inc == 1) count +=1;

                else if(a >= b && inc == 1) {
                    c = max(c, count);
                    inc = 0;
                    break;
                }

                else if(a > b && dec == 0) {
                    dec = 1;
                    count += 2;
                }

                else if(a > b && dec == 1) count += 1;

                else if(a <= b && dec == 1) {
                    dec = 0;
                    c = max(c, count);
                    break;
                }

                else {
                    break;
                }

                a = b;

            }
            c = max(c, count);
        }

        return c;
    }
};