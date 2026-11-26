class Solution {
public:
    bool canAliceWin(int n) {
        int a = 10;
        while(n >= a) {
            n = n - a;
            a --;
        }

        if(a % 2 == 0) return false;
        else return true;
    }
};