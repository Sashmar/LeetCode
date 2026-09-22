class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0; 
        int j = 0;
        string a = "";
        while(i < word1.size() && j < word2.size()) {
            a += word1[i];
            i++;
            a += word2[j];
            j++;
        }

        while(i < word1.size()) {
            a += word1[i];
            i ++;
        }
        while(j < word2.size()) {
            a += word2[j];
            j ++;
        }

        return a;
    }
};