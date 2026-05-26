class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<char> a;
        for(int i = 0 ; i < word.size(); i ++) {
            if(islower(word[i]) && (find(a.begin(), a.end(), word[i]) == a.end())) a.push_back(word[i]);
        }
        int count = 0;
        for(int i = 0 ; i < a.size() ; i ++) {
            if(find(word.begin(), word.end(), toupper(a[i])) != word.end()) count++;
        }

        return count;
    }
};