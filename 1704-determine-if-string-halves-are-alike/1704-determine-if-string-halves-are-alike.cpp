class Solution {
public:
    bool halvesAreAlike(string s) {
        if(s.size() % 2 != 0) return false;
        string a;
        string b;
        int i = 0;
        int c = s.size()/2;
        for(i = 0 ; i < c; i++) {
            a.push_back(s[i]);
        }

        for(int j = c ; j < s.size() ; j ++) {
            b.push_back(s[j]);
        }
        int count1 = 0;
        int count2 = 0;
        
        for(int j = 0 ; j < a.size(); j ++) {
            if(a[j] == 'a' || a[j] == 'e' || a[j] == 'i' || a[j] == 'o' || a[j] == 'u') count1++;
            else if(a[j] == 'A' || a[j] == 'E' || a[j] == 'I' || a[j] == 'O' || a[j] == 'U') count1 ++;
        }

        for(int j = 0 ; j < b.size(); j ++) {
            if(b[j] == 'a' || b[j] == 'e' || b[j] == 'i' || b[j] == 'o' || b[j] == 'u') count2++;
            else if(b[j] == 'A' || b[j] == 'E' || b[j] == 'I' || b[j] == 'O' || b[j] == 'U') count2 ++;
        }
        return count1 == count2;
    }
};