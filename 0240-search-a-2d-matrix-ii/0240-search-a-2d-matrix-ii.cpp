class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> temp;

        temp.reserve(row * col);
        for(const auto& row: matrix) {
            for(int val : row) temp.push_back(val);
        }

        auto it = find(temp.begin(), temp.end(), target);
        if(it != temp.end()) return true;
        else return false;

    }
};