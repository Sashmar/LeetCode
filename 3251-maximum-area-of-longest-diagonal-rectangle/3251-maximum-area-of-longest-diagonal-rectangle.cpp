class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        float g = 0;
        float d = 0;
        int high = 0;
        int num;
        for (int i = 0 ; i < dimensions.size() ; i ++) {
            num = 1;
            int l = dimensions[i][0];
            int w = dimensions[i][1];
            num = l * w;
            g = sqrt(l*l +w*w);
            if(g > d) {
                high = num;
                d = g;
            }
            else if ( g == d && num > high) high = num;
        }
        return high;
    }
};