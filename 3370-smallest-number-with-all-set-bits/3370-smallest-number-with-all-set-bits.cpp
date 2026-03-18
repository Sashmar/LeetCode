class Solution {
public:
    int smallestNumber(int n) {
        int g = 0;
        int k = 0;
        for(int i = n ; i <= 10000 ; i++) {
            int c1 = 0;
            int c2 = 0;
            g = i ;
            while(g) {
                g = g/2;
                c1++;
            }
            k = i;
            while(k) {
                k = k & (k -1);
                c2++;
            }

            if(c1 == c2) return i;
        }

        return 0;
    }
};