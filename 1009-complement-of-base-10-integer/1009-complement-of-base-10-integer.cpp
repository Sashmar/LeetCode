class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        string s = "";
        string a = "";
        while(n > 0) {
            s += (n % 2) + '0';
            n = n / 2;
        }
        int num = 0;
        for(int i = s.size()-1 ; i >= 0 ; i --) {
            if(s[i] == '1') a += '0';
            else a += '1';
        }

        for(char c : a) {
            num = num * 2 + (c - '0');
        }
        return num;
    }
};