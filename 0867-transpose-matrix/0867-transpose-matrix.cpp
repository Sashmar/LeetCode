class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        if(m == n) {
            for(int i = 0 ; i < matrix.size(); i ++) {
                for(int j = i+ 1 ; j < matrix[i].size() ; j ++) 
                    swap(matrix[i][j], matrix[j][i]);
            }
            return matrix;
        }

        else {
            vector<vector<int>> a(n, vector<int>(m));
            for(int i = 0 ; i < matrix.size() ; i ++) {
                for(int j = 0; j < matrix[i].size() ; j++) {
                    a[j][i] = matrix[i][j];
                }
            }
            return a;
        
        }

        return matrix;
    }
};