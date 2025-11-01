class Solution {
public:
    int totalMoney(int n) {
        int a = 0;
        if(n < 8) {
            for(int i = 1 ; i <=n ; i ++) {
                a+=i;
            }
            return a;
        }

        else {
            a=28;
            int c = 2;
            int b = 2;
            for(int i = 8 ; i <=n ; i++) {
                a+=b;
                b++;
                if(i % 7 == 0) {
                    c++;
                    b=c;
                }
            }
            return a;
        }
        return -1;
    }
};