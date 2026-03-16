class Solution {
public:
    bool hasAlternatingBits(int n) {
        string s = "";
        s += to_string(n % 2);
        n /= 2;
        int i = 0;
        while(n) {
            if(s[i] == '0' && n % 2 == 0) return false;
            else if(s[i] == '1' && n % 2 == 1) return false;
            s += to_string(n % 2);
            i++;
            n /= 2;
        }

        return true;
    }
};