class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> a;
        for(int i = 0 ; i < mat.size() ; i ++) {
            int c = 0;
            for(int j = 0 ; j < mat[0].size() ; j ++) {
                if(mat[i][j] == 0) break;
                c += mat[i][j];
            }

            a.push_back(c);
        }


        vector<int> b = a;

        sort(b.begin(), b.end());
        int j = 0;
        int i = 0;
        vector<int> d;

        while(j < k) {
            auto it = find(a.begin(), a.end(), b[i]);
            int ind = distance(a.begin(), it);
            d.push_back(ind);
            a[ind] = -1;
            j ++; i ++;
        }
        return d;

    }
};