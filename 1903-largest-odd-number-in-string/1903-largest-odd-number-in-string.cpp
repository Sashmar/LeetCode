class Solution {
public:
    string largestOddNumber(string num) {
        string a = num;
        int i;
        int c = 0;
        for(i = num.size() - 1 ; i >= 0 ; i --) {
            if((num[i] - '0') % 2 != 0) {
                c = 1;
                break;
            } 
        }
        if ( c == 0 && i == 0) return "";
        string b = "";
        for(int j = 0 ; j <= i ; j ++) {
            b += num[j];
        }
        return b;

    }
};