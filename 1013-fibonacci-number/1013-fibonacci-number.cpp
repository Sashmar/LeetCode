class Solution {
public:
    int fib(int n) {
        if(n ==0) return 0;
        else if (n==1) return 1;
        else {
            int f = 0;
            int s = 1;
            int t;
            int i = 0;
            while (i < n-1) {
                t = s +f;
                f = s;
                s= t;
                i++;
            }
            return t;
        }
        return -1;
    }
};