class Solution {
public:
    int minOperations(string s) {
        string a = s;
        sort(s.begin(), s.end());

        if(s.size() == 2 && a != s) return -1;

        else if(a == s) return 0;

        else if(a[0] == s[0] || a[a.size() -1] == s[s.size() - 1]) return 1;

        for(int i = 1 ; i < a.size() - 1 ; i ++) {
            if(a[i] == s[0] || a[i] == s[s.size() - 1]) return 2;
        }

        return 3;
    }
};