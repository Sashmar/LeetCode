class Solution {
public:
    string reverseStr(string s, int k) {
        string a = "";
        string result = "";
        int c = 0;
        int count = 0;
        for(int i = 0 ; i < s.size() ; i ++) {
            a += s[i];
            count ++;
            if((count % k ==0) && (c % 2 == 0)) {
                reverse(a.begin(), a.end());
                result += a;
                a = "";
                c++;
            }
            else if(count % k ==0) {
                result += a;
                a= "";
                c++;
            }
        }

        if(!a.empty()) {
            if(c % 2 == 0) reverse(a.begin(), a.end());
            result += a;
        }
        return result;
    }
};