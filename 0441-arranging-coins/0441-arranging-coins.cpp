class Solution {
public:
    int arrangeCoins(int n) {
        long b =0;
        int i = 0;
        for(i = 1 ; b <= n ; i++) {
            b+=i;
        }
        if(b == n) return i-1;
        else return i-2;
        return -1;
    }
};