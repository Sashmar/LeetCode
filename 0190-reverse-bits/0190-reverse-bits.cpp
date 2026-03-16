class Solution {
public:
    int reverseBits(int n) {
        bitset<32> bits(n);
        string s = bits.to_string();
        reverse(s.begin(), s.end());
        long long x= stoll(s, nullptr, 2);
        return (int)x;
    }
};