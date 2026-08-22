class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum = 0;
        long long mul = 1;
        long long a = n;
        while(n > 0) {
            sum += (n % 10);
            mul *= (n % 10);
            n = n / 10;
        }

        if (a % (sum + mul) == 0) return true;
        else return false; 
    }
};