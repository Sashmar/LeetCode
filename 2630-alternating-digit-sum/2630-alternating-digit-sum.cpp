class Solution {
public:
    int alternateDigitSum(int n) {
        int c = 0;
        int t =0;
        int count = 1;
        while(n >0) {
            c = c*10 + n % 10;
            n/=10;            
        }
        while (c > 0) {
            int b = c % 10;
            if(count % 2 != 0 ) t+=b;
            else t -= b;
            count++;
            c/=10;
        }
        return t;
    }
};