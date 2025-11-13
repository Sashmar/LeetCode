class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s == " ") return 1;
        int i = 0;
        int c = 0;
        int count =0;
        unordered_set<char> st;
        while(i < s.size()) {
            if(st.contains(s[i])) {
                i = i - count + 1;
                c = (c > count) ? c : count;
                st.clear();
                count =0;
            }
            else {
                st.insert(s[i]);
                count++;
                i++;
            }

        }

        c = (count > c) ? count : c;
        return c;
    }
};