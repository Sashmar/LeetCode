class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int i = 0;
        int m = grid.size();
        int n = grid[0].size();

        k = k % (m * n);
        while(i < k) {

            int last = grid[m -1][n -1];
            for(int j = m - 1; j >= 0 ; j --) {
                for(int a = n - 1 ; a >= 0 ; a --) {
                    if(a > 0) grid[j][a] = grid[j][a - 1];
                    else if(j > 0) grid[j][0] = grid[j - 1][n - 1];
                }
            }

            grid[0][0] = last;
            i ++;
        }

        return grid;
    }
};