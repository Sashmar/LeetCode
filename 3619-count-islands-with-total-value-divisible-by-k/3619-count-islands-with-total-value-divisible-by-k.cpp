class Solution {
public:

    long long checkConnect(vector<vector<int>>& grid, int m, int n, int i, int j) {
        if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 0) return 0;

        long long sum = 0 ;
        sum += grid[i][j];
        grid[i][j] = 0;

        sum += checkConnect(grid, m, n, i - 1, j);
        sum += checkConnect(grid, m, n, i + 1, j);
        sum += checkConnect(grid, m, n, i, j - 1);
        sum += checkConnect(grid, m, n, i, j + 1);

        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int count = 0 ;
        for(int i = 0 ; i < m ; i ++) {
            for(int j = 0 ; j < n ; j ++) {
                if(grid[i][j] == 0) continue;
                long long sum = checkConnect(grid, m, n, i, j);
                if(sum % k == 0) count ++;
            }
        }

        return count;
    }
};