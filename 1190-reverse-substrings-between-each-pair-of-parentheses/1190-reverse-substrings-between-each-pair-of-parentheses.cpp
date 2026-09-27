class Solution {
public:
    void uptoOpenBracket(stack<string>& s) {
        string a1= "";
        while(s.top() != "(") {
            a1 = s.top() + a1;
            s.pop();
        }
        s.pop();

        reverse(a1.begin(), a1.end());
        s.push(a1);
        
    }

    string reverseParentheses(string s) {
        stack<string> st;
        int i = 0;
        int b = 0;
        while(i < s.size()) {
            if(s[i] == '(') {
                st.push("(");
            }
            else if(s[i] == ')') {
                uptoOpenBracket(st);
            }
            else st.push(string(1,s[i]));
            i++;
        }


        string final = "";
        while(!st.empty()) {
            final = st.top() + final;
            st.pop();
        }

        return final;
    }
};