#include<bit>
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> a(n+1);
        for(int i = 0 ; i <= n ; i++) {
            unsigned int b = i;
            a[i] = popcount(b);
        }
        return a;
    }
};