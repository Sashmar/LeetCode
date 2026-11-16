class Solution {
public:
    string digitSum(string s, int k) {
        int sum = 0;
        while(s.size() > k) {
            sum = 0;
            int l = 0;
            string b = "";
            for(int i = 0 ; i < s.size() ; i ++) {
                sum += s[i] - '0';
                l ++;
                if((i + 1) % k == 0) {
                    b += to_string(sum);
                    sum = 0;
                    l = 0;
                }
            } 

            if(sum != 0) {
                b += to_string(sum);
            }
            else if(sum == 0 && l != 0) {
                b += to_string(sum);
            }

            s = b;
        }

        return s;
    }
};