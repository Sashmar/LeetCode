class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int total = numBottles;
        int e = numBottles;
        if(numBottles < numExchange) return total;
        else {
            int rem = 0;
            bool a = true;
            while(a) {
                while(numExchange <= e) {
                    e -= numExchange;
                    rem ++;
                    numExchange++;
                }
                total +=rem;
                e+= rem; 
                rem = 0;
                if(e < numExchange) return total;
            }

        }
        return -1;
    }
};