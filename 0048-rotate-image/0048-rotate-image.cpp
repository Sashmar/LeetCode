class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> a(n, vector<int> (n));
        for(int i = 0 ; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size() ; j ++) {
                a[j][n-i-1] = matrix[i][j];
            }

        }

        for(int i = 0 ; i < n; i ++) {
            for(int j = 0 ; j < n ;j ++) {
                matrix[i][j] = a[i][j];
            }
        }
    }
};