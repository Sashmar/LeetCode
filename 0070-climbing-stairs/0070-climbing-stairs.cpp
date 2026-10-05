class Solution {
public:
    int memo[46] = {0};

    int ways(int n) {
        int sum = 0;
        if(memo[n] != 0) return memo[n];
        if(n == 1) return 1;
        else if(n == 2) return 2;
        else {
            sum = sum + ways(n -1) + ways(n -2);
        }
        memo[n] = sum;
        return sum;
    }
    int climbStairs(int n) {
        return ways(n);
    }
};