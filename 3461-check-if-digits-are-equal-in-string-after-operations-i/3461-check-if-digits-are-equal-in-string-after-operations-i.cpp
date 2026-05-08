class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() > 2) {

            string a(s.size() - 1, '0');

            for(int i = 0 ; i < s.size() - 1 ; i++) {
                int c = s[i] - '0';
                int d = s[i+1] - '0';
                a[i] = ((c + d) % 10) + '0';
            }

            s = move(a);
        }

        if(s[0] == s[1]) return true;
        else return false;
    }
};