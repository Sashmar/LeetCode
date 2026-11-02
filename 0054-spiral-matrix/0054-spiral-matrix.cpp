class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> a;

        int rows = matrix.size();

        int cols = matrix[0].size();

        int s = rows * cols;

        int b = 0;

        vector<vector<int>> m(rows, vector<int>(cols,0));
        int rr = 0;
        int rc = 0;

        int dr = 0;
        int dc = cols - 1;

        int lr = rows - 1;
        int lc = 0;

        int ur = rows - 1;
        int uc = 0;

        while(b <= s) {
            for(int rc = 0 ; rc < cols ; rc ++) {
                if(m[rr][rc] == 0) {
                    m[rr][rc] = 1;
                    a.push_back(matrix[rr][rc]);
                    b ++;
                }
            }

            rr ++;

            if(b == s) break;

            for(dr = 0 ; dr < rows ; dr ++) {
                if(m[dr][dc] == 0) {
                    m[dr][dc] = 1;
                    a.push_back(matrix[dr][dc]);
                    b++;
                }
            }

            dc --;

            if(b == s) break;

            for(lc = cols - 1 ; lc >= 0 ; lc --) {
                if(m[lr][lc] == 0) {
                    m[lr][lc] = 1;
                    a.push_back(matrix[lr][lc]);
                    b ++;
                }
            }

            if(b == s) break;

            lr --;

            for(ur = matrix.size() - 1 ; ur >= 0 ; ur --) {
                if(m[ur][uc] == 0) {
                    m[ur][uc] = 1;
                    a.push_back(matrix[ur][uc]);
                    b ++;
                }
            }

            if(b == s) break;

            uc ++;

        }


        return a;

    }
};