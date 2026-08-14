class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> a;
        vector<char> b;
        for(int i = 0 ; i < s.size() ; i ++){
            if(!a.empty() && s[i] == '#') a.pop_back();
            else if(s[i] == '#') continue;
            else a.push_back(s[i]);
        }
        for(int i = 0 ; i < t.size() ; i ++){
            if(!b.empty() && t[i] == '#') b.pop_back();
            else if(t[i] == '#') continue;
            else b.push_back(t[i]);
        }
        if(a == b) return true;
        else return false;

    }
};