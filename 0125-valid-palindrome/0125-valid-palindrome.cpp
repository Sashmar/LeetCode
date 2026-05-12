class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(int i = 0 ; i < s.size(); i ++) {
            if(isalpha(s[i])) a += tolower(s[i]);
            else if(isalnum(s[i])) a += s[i];
            else continue;
        }
        int i = 0;
        int j = a.size() - 1;
        while(i <= j) {
            if(a[i] != a[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};