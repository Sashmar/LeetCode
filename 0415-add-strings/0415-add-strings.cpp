class Solution {
public:
    string addStrings(string num1, string num2) {

        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int c = 0;
        string d = "";
        while(i >= 0 && j >= 0) {
            int a = (num1[i] - '0') + (num2[j] - '0') + c;
            string e = to_string(a);
            if(e.size() == 2) {
                d += e[1];
                c = e[0] - '0'; 
            }
            else {
                d += e[0];
                c = 0;
            }
            i--;
            j--;
        }

        while(i >= 0) {
            int a = (num1[i] - '0') + c;
            string e = to_string(a);
            if(e.size() == 2) {
                d += e[1];
                c = e[0] - '0'; 
            }
            else {
                d += e[0];
                c = 0;
            }
            i--;
        }

        while(j >= 0) {
            int a = (num2[j] - '0') + c;
            string e = to_string(a);
            if(e.size() == 2) {
                d += e[1];
                c = e[0] - '0'; 
            }
            else {
                d += e[0];
                c = 0;
            }
            j--;
        }

        if(c != 0) d += (c + '0');

        reverse(d.begin(), d.end());
        return d;
    }
};