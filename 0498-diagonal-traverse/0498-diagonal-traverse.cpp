class Solution {
public:

    pair<int, int> up(int k, int l, vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        if (k < 0 && l >= col) {
            return { k + 2, l - 1 }; 
        }
        if (k < 0) {
            return { k + 1, l };
        }

        else if (l >= col) {
            return { k + 2, l - 1 };
        }

        return {k, l};
    }

    pair<int, int> down(int k, int l, vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        if (k >= row && l < 0) {
            return { k - 1, l + 2 };
        }

        if (l < 0) {
            return { k, l + 1 };
        }

        else if (k >= row) {
            return { k - 1, l + 2 };
        }

        return {k, l};
    }

    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        if (mat.empty() || mat[0].empty()) return {};

        vector<int> a;
        int row = mat.size();
        int col = mat[0].size();

        if(row * col == 1) return {mat[0][0]};
        int i = 0;
        int j = 0;
        string mov = "down";

        a.push_back(mat[i][j]);

        if (col > 1) {
            j++;
            mov = "down";
        } else {
            i++;
            mov = "up";
        }


        while(a.size() < (row * col)) {
            if(mov == "down") {
                while(true) {
                    a.push_back(mat[i][j]);

                    if(a.size() == row * col) return a;
                    i ++; j --;
                    auto [c, d] = down(i, j, mat);
                    if(c != i || d != j) {
                        mov = "up";
                        i = c; j = d;
                        break;
                    }
                    else {
                        i = c; j = d;
                    }
                }
            }

            else {
                while(true) {
                    a.push_back(mat[i][j]);

                    if (a.size() == row * col) return a;

                    i --; j ++;
                    auto [c, d] = up(i, j, mat);
                    if(c != i || d != j) {
                        mov = "down";
                        i = c; j = d; break;
                    }

                    else {
                        i = c; j = d;
                    }
                }
            }

        }

        return a;
    }
};