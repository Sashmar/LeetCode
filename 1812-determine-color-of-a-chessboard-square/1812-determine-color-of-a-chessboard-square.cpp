class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char a = coordinates[0];
        int b = a - 'a';
        int c = coordinates[1] - '0';
        if(b % 2 == 0 && c % 2 == 0) return true;
        else if(b % 2 != 0 && c % 2 != 0) return true;
        return false;
    }
};