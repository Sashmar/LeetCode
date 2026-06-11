class Solution {
public:
    string reverseWords(string s) {
        string a ;
        string b ;
        for(int i = 0 ; i < s.size() ; i ++) {
            if(s[i] == ' ') {
                reverse(b.begin(), b.end());
                a += b;
                a += ' ';
                b = "";
            }
            else {
                b += s[i];
            }
        }
        reverse(b.begin(), b.end());
        a += b ;
        return a;
    }
};