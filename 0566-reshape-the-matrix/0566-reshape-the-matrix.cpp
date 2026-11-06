class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int row = mat.size();
        int col = mat[0].size();

        if(col* row != r * c) return mat;

        vector<int> a;

        vector<vector<int>> b(r, vector<int>(c, 0));

        for(int i = 0 ; i < mat.size() ; i ++) {
            for(int j = 0 ; j < mat[i].size() ; j++) {
                a.push_back(mat[i][j]);
            }
        }

        int k = 0;

        for(int i = 0 ; i < r ; i++) {
            for(int j = 0 ; j < c ; j ++) {
                b[i][j] = a[k];
                k ++;
            }
        }
        return b;
    }
};