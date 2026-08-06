class Solution {
public:
    int smallestNumber(int n, int t) {
        while(n < 1000) {
            int mul = 1;
            int a = n;
            while(a > 0) {
                mul *= (a % 10);
                a = a / 10;
            }
            if(mul % t == 0) return n;
            n ++;
        }

        return -1;
    }
};