class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<int> a;
        stack<char> st;

        for(int i = 0 ; i < s.size() ; i ++) {
            if(s[i] == '(' && st.empty()) {
                st.push(s[i]);
                a.push_back(i);
            }
            else if(s[i] == '(') st.push(s[i]);

            else {
                if(st.size() == 1 && st.top() == '(') {
                    st.pop();
                    a.push_back(i);
                }
                else st.pop();
            }
        }

        for(int i = a.size() - 1 ; i >= 0 ; i --) {
            s.erase(a[i], 1);
        }

        return s;
    }
};