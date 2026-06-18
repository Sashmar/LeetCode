class Solution {
public:
    double angleClock(int hour, int minutes) {
        double t = abs((30 * hour - minutes * 5.5));

        if(t > 180) return 360 - t;
        return t;
    }
};