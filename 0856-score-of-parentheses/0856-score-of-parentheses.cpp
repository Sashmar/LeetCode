class Solution {
public:
    int scoreOfParentheses(string s) {
        int depth = 0;
        int sum = 0;
        for(int i = 0 ; i < s.size() ; i ++) {
            if(s[i] == '(') depth ++;
            else if(s[i] == ')' && s[i - 1] != ')') {
                depth --;
                sum += pow(2, depth);
            }
            else depth --;
        }

        return sum;
    }
};