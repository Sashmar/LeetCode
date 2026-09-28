class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int m = 0;
        stack<char> st;
        for(int i = 0 ; i < s.size() ; i ++) {
            if(s[i] == '(') {
                st.push(s[i]);
                count++;
                m = max(count, m);
            }

            else if(s[i] == ')') {
                st.pop();
                count--;
            }
        }


        return m;
        
    }
};