class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        int n = s.size();
        if(n == 0) return 0;

        for(int i = 0 ; i < s.size() ; i ++) {
            if(s[i] == '(') st.push(i);
            else {
                if(!st.empty() && s[st.top()] == '(') st.pop();
                else st.push(i);
            }
        }

        if(st.empty()) return n;
        int m = 0;
        int right = n;

        while(!st.empty()) {
            int left = st.top();
            st.pop();

            m = max(m, right - left - 1);

            right = left;

        }

        m = max(m, right);

        return m;

    }
};