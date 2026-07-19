class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n == 0) return 0;
        long long ans = 0;
        string a = to_string(n);
        string b = "";
        for(char i = 0 ; i < a.size() ; i ++) {
            if(a[i] != '0') b += a[i];
        }

        long long x = stoll(b);
        int sum = 0;
        for(char i = 0 ; i < b.size() ; i ++) {
            sum += b[i] - '0';
        }

        ans = x * sum;
        return ans;
    }
};