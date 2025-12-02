class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> a;
        int j = 0;
        for(int i = s.size()- 1 ; i >= 0 ; i --) {
            a.push_back(s[i]);
        }

        for(int i = 0 ; i< s.size() ; i++) {
            s[i] = a[i];
        }
    }
};