class Solution {
public:
    string toHex(int num) {
        stringstream ss;
        ss << hex << num;
        string s = ss.str();
        return s;

    }
};