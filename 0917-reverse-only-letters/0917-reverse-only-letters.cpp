class Solution {
public:
    string reverseOnlyLetters(string s) {
        string result = s;
        int i = 0 ;
        int j = s.size() - 1;
        while(i < s.size() && j >= 0) {
            if (!std::isalpha(static_cast<unsigned char>(s[i]))) {
                i++;
            } 
            else if (!std::isalpha(static_cast<unsigned char>(result[j]))) {
                j--;
            }
            else {
                s[i] = result[j];
                i++;
                j--;
            } 
        }


        return s;
    }
};