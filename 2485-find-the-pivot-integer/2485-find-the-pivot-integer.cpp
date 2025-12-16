class Solution {
public:
    int pivotInteger(int n) {
        int i = 1;
        int j = n;
        while(i <= j) {
            int sum1 = 0;
            int sum2 = 0;
            for(int a = i; a <= j; a++) {
                sum1 += a;
            }

            for(int b = j; b<= n ; b++) {
                sum2 += b;
            } 

            if(sum1 == sum2) return j;
            else j --;
        }

        return -1;
    }
};