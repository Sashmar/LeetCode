class Solution {
public:
    string processStr(string s) {
        string result;
        for(int i = 0 ; i < s.size() ; i ++) {
            if(s[i] == '*' && !result.empty()) { 
                result.pop_back();
            }

            else if(s[i] == '*' && result.empty()) continue;

            else if(s[i] == '#') result += result;

            else if(s[i] == '%') reverse(result.begin(), result.end());
            
            else result += s[i]; 
        }

        return result;
    }
};