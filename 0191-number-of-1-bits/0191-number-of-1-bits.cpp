class Solution {
public:
    int hammingWeight(int n) {
        unsigned int a = n;
        return popcount(a);
    }
};