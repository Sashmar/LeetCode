class Solution {
public:

    string invert(string a) {
        for(int i = 0 ; i< a.size() ;i ++) {
            char b = a[i];
            if(b == '1') b = '0';
            else b = '1';
            a[i] = b;
        }
        return a;

    }
    string rev(string a) {
        a = invert(a);
        reverse(a.begin(), a.end());
        return a;
    }
    char findKthBit(int n, int k) {
        int i = 1; 
        string s = "0";
        while (i < n) {
            s += "1" + rev(s);
            i++;
        }

        return s[k-1];
    }
};