class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==1 || c==0) return true;
        int t =0;
        for(long long i = 0; i*i <= c ; i++) {
            int a = i* i;
            long long n = c - a ;
            long long d = sqrt(n);
            if(d*d == n) {
                t = 1;
                break;
            } 
        }
        if(t==1) return true;
        else return false;
    }
};