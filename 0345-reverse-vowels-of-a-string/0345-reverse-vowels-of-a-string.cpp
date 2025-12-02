class Solution {
public:
    string reverseVowels(string s) {
        vector<char> a;
        for(int i = 0 ; i< s.size() ; i ++) {
            if(string("aeiouAEIOU").find(s[i]) != string :: npos) a.push_back(s[i]);
        }

        int j = a.size()-1;

        for(int i = 0 ; i <s.size() ; i ++) {
            if(string("aeiouAEIOU").find(s[i]) != string :: npos) {
                s[i] = a[j];
                j--;
            }
        }

        return s;
    }
};