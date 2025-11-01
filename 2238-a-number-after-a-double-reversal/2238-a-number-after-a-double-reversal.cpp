class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0) return true;
        int b = num;
        if(num % 10 == 0) return false;
        
        return true;
    }
};