class Solution {
public:
    int maxArea(vector<int>& height) {
        int ind = -1;
        int curr = 0;
        int val = 0;
        for(int i = 0 ; i < height.size() - 1 ; i ++) {

            if((height.size() - 1 - i) * height[i] <= val) continue;

            for(int j = i + 1 ; j < height.size(); j ++) {
                int h = min(height[i], height[j]);
                int curr = (j - i) * h;
                
                if(val < curr) {
                    val = curr;
                }
            }
        }

        return val; 
    }
};