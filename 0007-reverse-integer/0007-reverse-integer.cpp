class Solution {
public:
    int reverse(int x) {
        long long a = 0;
        int b = x;
        while(x != 0) {
            int i = x % 10;
            a = a * 10 + i;
            x /= 10;
        }
         if (a > INT_MAX || a < INT_MIN)
            return 0;

        return (int)a;

    }
};