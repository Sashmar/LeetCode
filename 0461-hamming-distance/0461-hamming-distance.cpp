class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset<32> binary81(x);

        bitset<32> binary82(y);

        int count = 0;

        for(int i = 0 ; i < binary81.size() ; i ++) {
            if(binary81[i] != binary82[i]) count ++;
        }

        return count;
    }
};