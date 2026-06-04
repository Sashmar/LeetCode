class Solution {
public:

    int isWave(int num) {
        string a = to_string(num);
        int c = 0;
        if(a.size() < 3) return false;
        for(int i = 1 ; i < a.size() - 1 ; i ++){
            int b = a[i - 1] - '0';
            int e = a[i] - '0';
            int d = a[i + 1] - '0';
            if(e > b && e > d) c++;
            else if(e < b && e < d) c++;
        }
        return c;
    }
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for(int i = num1 ; i <= num2 ; i ++) {
            count += isWave(i);
        }
        return count;
    }
};