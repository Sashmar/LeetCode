class Solution {
public:

    void decode(stack<string>& st) {
        string a = "";

        while(!st.empty() && st.top() != "[") {
            a = st.top() + a;
            st.pop();
        }

        if(!st.empty() && st.top() == "[") {
            st.pop();

        }


        if(!st.empty()) {
            string h = "";
            int num = stoi(st.top());
            st.pop();

            for(int i = 0 ; i < num ; i ++) {
                h = h + a;
            }

            st.push(h);
        }
    }

    string decodeString(string s) {
        stack<string> st;
        for(int i = 0 ; i < s.size() ; i ++) {
            if(s[i] == ']') decode(st);
            else if(isdigit(s[i])) {
                string num = "";
                while(i < s.size() && isdigit(s[i])) {
                    num += s[i];
                    i++;
                }
                i --;
                st.push(num);
            }
            else st.push(string(1, s[i]));
        }

        string result = "";
        while(!st.empty()) {
            result = st.top() + result;
            st.pop();
        }

        return result;
    }
};