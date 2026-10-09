class Solution {
public:
    int minInsertions(string s) {
        stack<char> open;
        int b = 0;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i ++) {
            if(s[i] == ')' && b == 1) {
                if(!open.empty()) open.pop();
                else count ++;
                b = 0;
            }
            else if(s[i] == ')' && b == 0) {
                b ++;
            }

            else if(s[i] == '(' && b == 1) {
                if(!open.empty()) {
                    open.pop();
                    count++;
                }
                else count += 2; 
                open.push(s[i]);
                b = 0;
            }
            else open.push(s[i]);
        }

        if(b == 1) {
            if(!open.empty()) {
                count ++;
                b = 0;
                open.pop();
            }
            else count += 2;
        }

        if(!open.empty()) count += (2 * open.size());
        return count;
        
    }
};