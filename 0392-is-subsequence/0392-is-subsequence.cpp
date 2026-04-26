class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == t) return true;
        int j = 0;
        int a = 0;
        for(int i = 0 ; i < t.size() ; i ++) {
            if(t[i] == s[j]) j++;
            if(j == s.size()) {
                a = 1;
                break;
            }
        }

        if(a == 1) return true;
        else return false;
    }
};