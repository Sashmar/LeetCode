class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int c = 0;
        string d = "";
        while(i >= 0 && j >= 0) {
            if(a[i] == '1' && b[j] == '1' && c == 1) {
                d += '1';
                c = 1;
            }
            else if(a[i] == '1' && b[j] == '1' && c == 0) {
                d += '0';
                c = 1;
            }
            else if(a[i] == '0' && b[j] == '1' && c == 1) {
                d += '0';
                c = 1;
            }

            else if(a[i] == '1' && b[j] == '0' && c == 0) {
                d += '1';
                c = 0;
            }
            else if(a[i] == '1' && b[j] == '0' && c == 1) {
                d += '0';
                c = 1;
            }
            else if(a[i] == '0' && b[j] == '1' && c == 0) {
                d += '1';
                c = 0;
            }
            else if(a[i] == '0' && b[j] == '0' && c == 0) {
                d += '0';
                c = 0;
            }
            else {
                d += '1';
                c = 0;
            }
            i --;
            j --;
        }

        while(i >= 0) {
            if(c == 1 && a[i] == '1') {
                d += '0';
                c = 1;
            }
            else if(c == 1 && a[i] == '0') {
                d += '1';
                c = 0;
            }

            else if(c == 0 && a[i] == '0') d += '0';
            else d += '1';
            i --;
        }

        while(j >= 0) {
            if(c == 1 && b[j] == '1') {
                d += '0';
                c = 1;
            }
            else if(c == 1 && b[j] == '0') {
                d += '1';
                c = 0;
            }

            else if(c == 0 && b[j] == '0') d += '0';
            else d += '1';
            j --;
        }
        if(c == 1) d += '1';
        reverse(d.begin(), d.end());
        return d;
    }
};