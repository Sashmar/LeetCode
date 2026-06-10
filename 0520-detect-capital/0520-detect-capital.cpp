class Solution {
public:
    bool detectCapitalUse(string word) {
        int c = 0;
        for(char a : word) {
            if(islower(a)) {
                c = 1;
                break;
            }
        }

        if(c == 0) return true;
        for(char a : word) {
            if(isupper(a)) {
                c = 1;
                break;
            }
        }
        if(c == 0) return true;
        c = 0;
        for(int i = 0 ; i < word.size() ; i++) {
            if(isupper(word[i]) && i != 0) return false;
        }

        return true;
    }
};