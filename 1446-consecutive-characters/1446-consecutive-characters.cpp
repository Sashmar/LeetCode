class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int max = 0; 
        for(int i = 1 ; i < s.size() ; i ++) {
            if(s[i] == s[i - 1]) count++;
            else {
                if(max < count) max = count;
                count = 1;
            }
        }

        if(max < count) max = count;
        return max;
    }
};