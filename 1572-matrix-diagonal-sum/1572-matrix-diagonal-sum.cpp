class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i = 0 ; i < mat.size() ; i ++) {
            for(int j = 0 ; j < mat[i].size() ; j ++) {
                if(i == j) sum += mat[i][j];
            }
        }

        for(int i = 0 ; i < mat.size() ; i++) {
            int count = 0;
            for(int j = mat.size() - 1 ; j >= 0 ; j --) {
                if((i + j) == (mat.size() - 1)) {
                    sum += mat[i][j];
                    count = 1;
                }

                if(count== 1) break;
            }
        }

        int n = mat.size() / 2;

        if(mat.size() % 2 != 0) {
            sum -= mat[n][n];
        }

        return sum;
    }
};