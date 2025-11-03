class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int t = 0;
        int i =0;
        int j =1;
        while (i < colors.size()-1 && j < colors.size()) {
            if(colors[i] == colors[j] && neededTime[i] <= neededTime[j]) {
                t +=neededTime[i];
                if(i + 1 != j) {
                    j++;
                    i = j-1;
                }
                else {
                    i++;
                    j++;
                }
            }
            else if(colors[i] == colors[j] && neededTime[i] > neededTime[j] ) {
                t += neededTime[j];
                if(colors[j] == colors[j+1] && j + 1 != colors.size()) j++;
                else {
                    j++;
                    i = j - 1;
                }
            }
            else {
                i++;j++;
            }
        }
        return t;
    }
};