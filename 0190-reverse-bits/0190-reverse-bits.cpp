class Solution {
public:
    int reverseBits(int n) {
        bitset<32> bits(n);
        string s = bits.to_string();
        reverse(s.begin(), s.end());
        int num = 0;
        for(char c : s) {
            num = num * 2 + ( c - '0');
        }
        return num;
    }
};