class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int a = INT_MAX;
        unordered_map<char, int>m;
        m['b'] = 0;
        m['a'] = 0;
        m['l'] = 0;
        m['o'] = 0;
        m['n'] = 0;
        for(int i = 0 ; i< text.size() ; i ++) {
            if(text[i] == 'b') m['b']++;
            else if(text[i] == 'a') m['a']++;
            else if(text[i] == 'l') m['l']++;
            else if(text[i] == 'o') m['o']++;
            else if(text[i] == 'n') m['n']++; 
        }

        return min({
            m['b'],
            m['a'],
            m['l']/2,
            m['o']/2,
            m['n'],
        });
    }
};