class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int count1 = 0;
        int count2 = 0;
        int i = 1;
        int sumO = 0;
        int sumE = 0;
        while(count1 < n) {
            sumO += i;
            count1 ++;
            i +=2;
        }
        i = 2;
        while(count2 < n) {
            sumE += i;
            count2 ++;
            i +=2;
        }

        return gcd(sumO,sumE);
    }
};