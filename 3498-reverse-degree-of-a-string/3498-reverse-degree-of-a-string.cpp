class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        char a;
        for(int i = 0 ; i < s.size() ; i++) {
            a = 'z' - (s[i] - 'a');
            a = a - 'a';
            a ++;
            sum += a * (i+1);
        }

        return sum;
    }
};