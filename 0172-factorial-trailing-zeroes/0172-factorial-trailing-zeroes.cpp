class Solution {
public:
    int trailingZeroes(int n) {
        int a =1;
        int c = 0;
        int b =5;
        while(a > 0) {
            c+=n / b;
            b*=5;
            a = n/b;
        }
        return c;
    }
};