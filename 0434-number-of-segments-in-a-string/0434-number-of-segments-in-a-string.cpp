class Solution {
public:
    int countSegments(string s) {
        if(s.empty()) return 0;
        int count = 0;
        int w = 0;
        for(int i = 0 ; i < s.size() ; i++) {
            if((isalpha(static_cast<unsigned char>(s[i])) || s[i] == ',') && w == 0) w = 1;
            else if(isdigit(static_cast<unsigned char>(s[i])) && w == 0) w = 1;
            else if(s[i] == '.' && w == 0) w = 1;
            else if(s[i] == ' ' && w == 1) {
                count++;
                w = 0;
            }
        }

        if(s[s.size()-1] != ' ') count++;
        return count;
    }
};