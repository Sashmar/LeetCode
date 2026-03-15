class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> a(m, 0);
        vector<int> b(n, 0);
        for(int i = 0 ; i < mat.size() ; i++) {
            for(int j = 0 ; j < mat[i].size() ; j++) {
                if(mat[i][j] == 1) a[i] ++;
            }
        }
        for(int j = 0 ; j < n ; j++) {
            for(int i = 0 ; i < m ; i++) {
                if(mat[i][j] == 1) b[j] ++;
            }
        }

        int count = 0;

        for(int i = 0 ; i < m ; i ++) {
            for(int j = 0 ; j < n ; j ++) {
                if(mat[i][j] == 1 && a[i] == 1 && b[j] == 1) count++;
            }
        } 

        return count;

    }
};