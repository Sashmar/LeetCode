class Solution {
public:

    pair<int, int> down(int k, int l, vector<vector<char>>& mat) {
        if(k >= mat.size()) {
            k-=2; l += 1;
        }
        return {k, l};
    }

    pair<int, int> di(int k, int l, vector<vector<char>>& mat) {
        if(k < 0) {
            k += 2; l--;
        }
        return {k, l};
    }
    string convert(string s, int numRows) {
        if(numRows == 1 || s.size() < 2) return s;

        string output = "";
        int m = s.size();


        vector<vector<char>> mat(numRows, vector<char>(m-1, '\0'));

        int c = 0, i = 0, j = 0;
        string mov = "down";

        while(c < s.size()) {
            if(mov == "down") {
                mat[i][j] = s[c];
                i ++; c++;
                auto [d,e] = down(i, j, mat);
                if(d != i || e != j) {
                    i = d; j = e;
                    mov = "di";
                }
                else {
                    i = d; j = e;
                }
            }

            else {
                mat[i][j] = s[c];
                i --; j ++; c++;
                auto [d, e] = di(i, j, mat);
                if(d != i || e != j) {
                    i = d; j = e;
                    mov = "down";
                }
                else {
                    i = d; j = e;
                }   
            }
        }

        for(int i = 0 ; i < mat.size() ; i ++) {
            for(int j = 0 ; j < mat[0].size() ; j ++) {
                if(mat[i][j] != '\0') output += mat[i][j];
            }
        }

        return output;
    }
};