class Solution {
public:


    bool isPrime(int n) {
        if (n == 1) return false;
        for(int i = 2; i * i <= n ; i++) {
            if(n % i == 0) return false;
        }

        return true;
    } 
    int countPrimeSetBits(int left, int right) {
        int c = 0;
        for(int i = left ; i <= right ; i++) {
            int count  = 0;
            int a = i;
            while(a) {
                a = a & (a-1);
                count ++;
            }
            if(isPrime(count)) c++;

        }

        return c;
    }
};