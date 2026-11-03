class Solution {
public:

    bool checkRC(vector<vector<char>>& board, int i, int j, int m, int n){
        for(int k = 0 ; k < n ; k ++) {
            if(board[i][k] == board[i][j] && k != j) return false;
        }

        for(int k = 0 ; k < m ; k ++) {
            if(board[k][j] == board[i][j] && k != i) return false;
        }

        return true;
    }

    bool checktriple(vector<vector<char>>& board, int i, int j, int m, int n) {
        map<char, int> mp;
        for(int k = i ; k < i + 3; k ++) {
            for(int g = j ; g < j + 3 ; g ++) {
                char current = board[k][g];
                if(current == '.') continue;
                if(mp[current] == 1) return false;
                else mp[board[k][g]] = 1;
            }
        }

        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        for(int i = 0 ; i < board.size() ; i ++) {
            for(int j = 0 ; j < board[0].size() ; j ++) {
                if(board[i][j] == '.') continue;
                bool a = checkRC(board, i, j, m, n);
                if(!a) return false;
            }
        }

        int i = 0;
        int j = 0;

        for(int k = 0 ; k < 9 ; k ++) {
            bool b = checktriple(board, i, j, m, n);
            if(!b) return false;

            if(j == 6) {
                i += 3;
                j = 0;
            }

            else j += 3;
        }

        
        return true;
    }
};