class Solution {
public:
    int mirrorDistance(int n) {
        int a = n;
        int temp = 0;
        while(n > 0) {
            temp = (temp * 10) + (n % 10);
            n = n / 10;
        }

        return abs(a - temp);
    }
};