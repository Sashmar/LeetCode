class Solution {
public:

    int checkUniquePath(vector<vector<int>>& obstacleGrid, int i, int j, int m, int n, vector<vector<int>>& memo) {
        if(i < 0 || j < 0 || i > m - 1 || j > n - 1) return 0;

        if(obstacleGrid[i][j] == 1) return 0;

        if(m - 1 == i && n - 1 == j) return 1;

        if(memo[i][j] != -1) return memo[i][j];

        int right = checkUniquePath(obstacleGrid, i + 1, j, m, n, memo);
        int down = checkUniquePath(obstacleGrid, i, j + 1, m, n, memo);

        memo[i][j] = right + down;


        return memo[i][j];
    }


    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        vector<vector<int>>memo(m, vector<int> (n, -1));

        return checkUniquePath(obstacleGrid, 0, 0, m, n, memo);
    }
};