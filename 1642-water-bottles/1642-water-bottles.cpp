class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        if(numBottles < numExchange) {
            return total;
        }
        else {
            bool a = true;
            while(a) {
                int nuw = numBottles / numExchange;
                int rem = numBottles % numExchange;
                total += nuw;
                numBottles = nuw + rem;
                if(numBottles < numExchange) a = false;
            }
            return total;
        }
        return -1;
    }
};