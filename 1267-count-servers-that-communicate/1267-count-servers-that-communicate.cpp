class Solution {
public:

    set<pair<int,int>> check;
    void checkConnect(vector<vector<int>>& grid, int i, int j, int m, int n) {
        bool t = false;

        for(int k = 0 ; k < n ; k ++) {
            if(k != j && grid[i][k] == 1) {
                t = true;
                check.insert({i, k});
            }
        }

        for(int k = 0 ; k <m ; k ++) {
            if(k != i && grid[k][j] == 1) {
                t = true;
                check.insert({k, j});
            }
        }

        if(t) {
            check.insert({i,j});
            grid[i][j]= 0;
        }

    }

    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        check.clear();

        for(int i = 0 ; i < m ; i ++) {
            for(int j = 0 ; j < n ; j ++) {
                if(grid[i][j] == 0) continue;
                
                checkConnect(grid, i, j, m, n);
            }
        }

        return check.size();
    }
};